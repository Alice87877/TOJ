//https://toj.tfcis.org/oj/pro/3/
#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        while(a!=0&&b!=0){
            if(a>b) a%=b;
            else b%=a;
        }
        if(a>0) cout<<a<<"\n";
        else cout<<b<<"\n";
    }
    return 0;
}
