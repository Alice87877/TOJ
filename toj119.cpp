//https://toj.tfcis.org/oj/pro/119/
#include <iostream>
using namespace std;

int main(){
    int s[200001],n,i=0; cin>>n;
    bool flag=true;
    while(n--){
        cin>>s[i];
        i++;
    }
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(abs(b-a)<=8){
            swap(s[b-1],s[a-1]);
        }else{
            flag=false;
            break;
        }
    }
    if(flag) cout<<"SORTED!\n";
    else cout<<"I QUIT!\n";
    for(int j=0;j<i-1;j++) cout<<s[j]<<" ";
    cout<<s[i-1]<<"\n";
    return 0;
}
