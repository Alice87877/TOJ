//http://203.68.236.9/problem/b0003
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3138
/*
使用deque陣列實作n個集合，直接將集合內所有點加入，樹根的集合，所有樹都只有兩層
第一種，集合p所有點加入集合q，找出集合p所有點加入集合q的第二層
第二種，將點p加入集合q，將p從p所在集合移除，再將點p加入集合q
第三種，找出點p所在集合的個數與總和
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#define SIZE 100100
using namespace std;
deque<int> G[SIZE];
int pa[SIZE];
void join(int x, int y) {
    for (int i = 0; i < G[x].size(); i++) {
        G[y].push_back(G[x][i]);
        pa[G[x][i]] = y;
    }
    G[x].clear();
}
int main()
{
    int n, m, cmd, p, q, pp, pq, now;
    while (scanf("%d %d", &n, &m) == 2) {
        for (int i = 1; i <= n; i++) {
            G[i].clear();
        }
        for (int i = 1; i <= n; i++) {
            G[i].push_back(i);
            pa[i] = i;
        }
        for (int i = 0; i < m; i++) {
            scanf("%d", &cmd);
            if (cmd == 1) {//移動p所在集合到q所在集合
                scanf("%d %d", &p, &q);
                if (pa[p] != pa[q]) join(pa[p], pa[q]);
            }
            else if (cmd == 2) {//移動p到q所在集合
                scanf("%d %d", &p, &q);
                if (pa[p] != pa[q]) {
                    for (std::deque<int>::iterator it = G[pa[p]].begin(); it != G[pa[p]].end(); ++it) //刪除p
                        if (*it == p) {
                            G[pa[p]].erase(it);
                            break;
                        }
                    G[pa[q]].push_back(p); //p加入集合q中
                    pa[p] = pa[q];
                }
            }
            else {
                scanf("%d", &p);
                int sum = 0;
                for (int i = 0; i < G[pa[p]].size(); i++) {
                    sum += G[pa[p]][i];
                }
                printf("%d %d\n", G[pa[p]].size(), sum);
            }
        }
    }
}

/*
1 將 p q 所在的集合合併
2 將 p 移到 q 所在的集合
3 回傳 p 所在的集合 元素數量 以及 元素總和

V[1]={1} V[2]={2} V[3]={3}
t[1]=1 t[2]=2 t[3]=3

1 1 2
v[1]={1,2}
t[1]=1 t[2]=2

你需要實作一個類似於並查集（Union-Find）的資料結構，但不完全相同。
這個資料結構是一個不相交集合的集合，支援三個操作：
1. `1 p q` 將包含元素 p 和元素 q 的集合合併。如果 p 和 q 已經在同一個集合中，忽略這個指令。
2. `2 p q` 將元素 p 移動到包含元素 q 的集合中。如果 p 和 q 已經在同一個集合中，忽略這個指令。
3. `3 p` 返回包含元素 p 的集合中元素的個數和元素的總和。
最初，集合由 n 個單獨的集合組成：{1}, {2}, {3}, ... , {n}。
說明：
- 最初：{1}, {2}, {3}, {4}, {5}
- 操作 `1 1 2` 之後：{1,2}, {3}, {4}, {5}
- 操作 `2 3 4` 之後：{1,2}, {3,4}, {5} （當從 {3} 取出 3 時，忽略生成的空集合）
- 操作 `1 3 5` 之後：{1,2}, {3,4,5}
- 操作 `2 4 1` 之後：{1,2,4}, {3,5}

有若干個測試案例。每個測試案例以一行包含兩個整數 n 和 m 開始，1 ≤ n, m ≤ 100,000，分別代表整數的數量和指令的數量。接下來的 m 行每行包含一個指令。
對於每個操作，1 ≤ p, q ≤ n。輸入以檔案結束符（EOF）結束。

對於每個類型為 3 的指令，輸出兩個整數：元素的個數和元素的總和。

*/
