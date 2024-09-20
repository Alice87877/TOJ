//https://tioj.ck.tp.edu.tw/problems/1424
#include <bits/stdc++.h>
using namespace std;

int main(){
	priority_queue<int,vector<int>,greater<int> > pq;
	int N;
	while(cin>>N){
	    long long m=0;
        while(!pq.empty()) pq.pop();
        while(N--){
            int n;
            cin>>n;
            pq.push(n);
        }
        if(pq.size()==1){
            m=pq.top();
        }
        while(pq.size()!=1){
            int a,b;
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            pq.push(a+b);
            m+=a+b;
        }
        cout<<m<<'\n';
	}

}
