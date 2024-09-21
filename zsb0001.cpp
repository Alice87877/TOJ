//https://zerojudge.tw/ShowProblem?problemid=a565
//http://203.68.236.9/problem/b0001
#include <bits/stdc++.h>
using namespace std;

int main(){
     ios::sync_with_stdio(false);
     cin.tie(0);
     int n;
    cin>>n;
    while(n--){
        int time=0;
        stack<char> a;
        string st;
        cin>>st;
        while(!a.empty()) a.pop();
        for(int i=0;st[i];i++){
            if(st[i]=='p'){
                a.push('p');
            }
            if(st[i]=='q' && !a.empty()){
                if(a.top()=='p'){
                    time++;
                    a.pop();
                }
            }
        }
        cout<<time<<'\n';
    }

}
