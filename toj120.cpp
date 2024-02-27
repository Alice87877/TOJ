//https://toj.tfcis.org/oj/pro/120/
#include <iostream>
using namespace std;

int main(){
    long long n,a[200001],s[200002]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s[i+1]=s[i]+a[i];
    }
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        cout<<s[b]-s[a-1]<<"\n";
    }

    return 0;
}
