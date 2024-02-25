//https://toj.tfcis.org/oj/pro/117/
#include <iostream>
using namespace std;

int main(){
    int t,n,max=0; cin>>t;
    while(t--){
        cin>>n;
        if(n>max) max=n;
    }
    cout<<max;

    return 0;
}
