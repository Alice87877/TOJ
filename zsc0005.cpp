//https://zerojudge.tw/ShowProblem?problemid=g595
//http://203.68.236.9/problem/c0005
#include <iostream>

using namespace std;

int main(){

    int n,sum=0;
    int a[100];
    while(cin>>n){
        sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]==0){
        sum+=a[1];
    }
    if(a[n-1]==0){
        sum+=a[n-2];
    }
    for(int i=1;i<n-1;i++){
        if(a[i]==0){
            if(a[i+1]>=a[i-1]){
                sum+=a[i-1];
            }else{
                sum+=a[i+1];
            }
        }
    }
    cout<<sum<<'\n';
    }
}
