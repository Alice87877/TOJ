//http://203.68.236.9/problem/c0004
//https://zerojudge.tw/ShowProblem?problemid=h081
#include <iostream>

using namespace std;

int main(){
    int n,d,a[1000];
    while(cin>>n>>d){
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int now=a[0],ok=1;
        for(int i=1;i<n;i++){
            if(now+d<=a[i]&&ok==1){
                sum+=a[i]-now;
                now=a[i];
                ok=0;
            }else if(now>=a[i]+d&&ok==0){
                now=a[i];
                ok=1;
            }
        }
        cout<<sum<<'\n';
    }
}
