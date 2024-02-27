//https://toj.tfcis.org/oj/pro/485/
#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int ans=n-1;
    for(int i=n-1;i>=0;i--){
        bool flag=true;
        for(int l=i,r=n-1;l<r;l++,r--){
            if(s[l]!=s[r]){
                flag=false;
                break;
            }
        }
        if(flag) ans=i;
    }

    cout<<ans<<"\n";
    return 0;
}
