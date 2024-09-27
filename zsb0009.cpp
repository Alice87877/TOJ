//http://203.68.236.9/problem/b0009
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=23&page=show_problem&problem=2077
#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> mset;
    multiset<int>::iterator ma,mi;
    int n;
    while(cin>>n&&n!=0){
        mset.clear();
        int ans=0;
        while(n--){
            int k;
            cin>>k;
            while(k--){
                int a;
                cin>>a;
                mset.insert(a);
            }
            ma=--mset.end();
            mi=mset.begin();
            ans+=*ma-*mi;
            mset.erase(mi);
            mset.erase(ma);
        }
        cout<<ans<<'\n';
    }
}

/*
每家 Mal-Wart 超市都準備了一個促銷活動，遵循以下規則運行：
- 想參加促銷活動的顧客（也就是受騙者）必須將他們的電話號碼寫在購買發票上，並將發票投入一個特別的箱子中。
- 每天結束時，會從箱子中選出兩張發票：首先選出最高的發票，然後選出最低的發票。
支付最高金額發票的顧客會獲得一個獎金，金額等於他們的發票金額減去當天最低發票的金額。
- 兩張被選中的發票不會被退回箱子，剩下的發票則會留在箱子裡供第二天使用。
- Mal-Wart 有很多顧客，所以每天結束時箱子裡至少會有兩張發票。
- 為什麼 Mal-Wart 會這樣做是顯而易見的：他們賣的東西很爛，容易迅速損壞並且無法修復。
他們提供短期保固，但要獲得保固更換，你必須出示購買發票。所以如果你足夠天真參加這個促銷活動，你最終會後悔。
你的任務是編寫一個程式，接受投入箱子的發票資訊，並計算 Mal-Wart 在促銷活動中的花費。

輸入包含若干個測試案例。每個案例的第一行包含一個整數 n，1 ≤ n ≤ 5000，代表促銷活動進行的天數。接下來的 n 行每行包含一串用空白分隔的非負整數。這些數字為該案例中第 i 天的資料。
每一行的第一個數字 k，0 ≤ k ≤ 10^5，表示當天投入箱子的發票數量，接下來的 k 個數字為該天的發票金額（正整數）。沒有任何發票的金額超過 10^6。
所有案例中發票的總數量不超過 10^6。
當 n = 0 時，輸入結束，該案例不應被處理。

對於每個輸入的測試案例，輸出一個數字：Mal-Wart 因為促銷活動支付給顧客的總金額。

*/