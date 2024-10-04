//http://203.68.236.9/problem/b0011
//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=481
#include <bits/stdc++.h>
using namespace std;

map<int,int> whatteamis;
vector<int> nowteam,teams[1010];

int main(){
    int n,sctime=1;
    while(cin>>n && n!=0){
        cout<<"Scenario #"<<sctime<<'\n';
        sctime++;
        whatteamis.clear();
        nowteam.clear();
        for(int i=0;i<1010;i++){
            teams[i].clear();
        }
        for(int i=1;i<=n;i++){
            int t;
            cin>>t;
            while(t--){
                int inpu;
                cin>>inpu;
                whatteamis[inpu]=i;
            }
        }
        string sinpu;
        while(cin>>sinpu && sinpu!="STOP"){
            if(sinpu=="ENQUEUE"){
                int inpu;
                cin>>inpu;
                teams[whatteamis[inpu]].push_back(inpu);
                if(!nowteam.empty()){
                    bool have=0;
                    for(int i=0;i<nowteam.size();i++){
                        if(nowteam[i]==whatteamis[inpu]){
                            have=1;
                            break;
                        }
                    }
                    if(!have){
                        nowteam.push_back(whatteamis[inpu]);
                    }
                }else{
                    nowteam.push_back(whatteamis[inpu]);
                }
            }
            if(sinpu=="DEQUEUE"){
                int npn=*(nowteam.begin());
                cout<<*(teams[npn].begin())<<'\n';
                teams[npn].erase(teams[npn].begin());
                if(teams[npn].empty()){
                    nowteam.erase(nowteam.begin());
                }
            }
        }
        cout<<'\n';
    }
}

/*
### 題目：
隊列（Queues）和優先隊列（Priority Queues）是大多數計算機科學家都熟悉的資料結構。然而，「隊伍隊列」（Team Queue）並不那麼為人熟知，
儘管它經常在日常生活中出現。例如，午餐時間食堂前的隊伍就是一個隊伍隊列。
在隊伍隊列中，每個元素都屬於一個隊伍。如果某個元素加入隊列，
它首先會從隊首到隊尾進行檢查，查看它的隊友（同一隊伍的其他元素）是否已經在隊列中。
如果有，那麼這個元素會插入到它們的後面。如果沒有，那麼這個元素會加入隊列的隊尾，成為新的最後一個元素（運氣不好）。
出隊操作和普通隊列一樣，元素會按照它們在隊伍隊列中出現的順序從隊首處依次被處理。

你的任務是撰寫一個程式來模擬這樣的隊伍隊列。

### 輸入：
輸入文件包含一個或多個測試案例。每個測試案例以一個整數 `t` 開頭，表示隊伍的數量（1 ≤ t ≤ 1000）。
接下來是 `t` 個隊伍的描述，每個描述包括隊伍中成員的數量以及這些成員的具體數字。
隊伍中的成員都是範圍在 0 到 999999 之間的整數。每個隊伍最多可以有 1000 個成員。

最後，會給出一個命令列表。命令有三種類型：
- `ENQUEUE x`：將元素 `x` 加入隊伍隊列
- `DEQUEUE`：處理並移除隊伍隊列的首個元素
- `STOP`：結束該測試案例

輸入以一個值為 `0` 的 `t` 結束，表示所有測試案例已經結束。

**注意**：一個測試案例中最多可能包含 200000 條命令，因此隊伍隊列的實現應該是高效的：元素的入隊和出隊操作都應該在常數時間內完成。

---

### 輸出：
對於每個測試案例，首先輸出一行 `"Scenario #k"`，其中 `k` 是測試案例的編號。
然後，對於每條 `DEQUEUE` 命令，輸出一行顯示被移除的元素。在每個測試案例之後，輸出一個空行，即使是在最後一個測試案例之後也要輸出空行。

*/