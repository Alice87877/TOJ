//https://toj.tfcis.org/oj/pro/170/
#include <bits/stdc++.h>
using namespace std;

void normalstar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        for(int j=1;j<=i*2-1;j++)
        cout<<"*";
        cout<<'\n';
    }
}

void cstar(int n){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=k;i++){
            for(int j=1;j<=n-k;j++)
                cout<<" ";
            for(int j=1;j<=k-i;j++)
                cout<<" ";
            for(int j=1;j<=i*2-1;j++)
                cout<<"*";
            cout<<'\n';
        }
    }
}

void estar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+2;j++)
        cout<<" ";
        for(int j=1;j<=i*2-1;j++)
        cout<<"*";
        cout<<'\n';
    }
    for(int i=1;i<=n*2+3;i++)
        cout<<"#";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>c>>n;
        if(c=='A'){
            normalstar(n);
        }else if(c=='B'){
            normalstar(n);
            normalstar(n);
        }else if(c=='C'){
            cstar(n);
        }else if(c=='D'){
            normalstar(n*10);
        }else if(c=='E'){
            estar(n);
        }else if(c=='F'){
            normalstar(n*2);
        }else if(c=='G'){
            normalstar(n*3);
        }else if(c=='H'){
            normalstar(n*7);
        }else if(c=='I'){
            n=4*n-1;
            normalstar(n);
        }
        cout<<'\n';
    }
    cout<<'\n';
}
