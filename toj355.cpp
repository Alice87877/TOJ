//https://toj.tfcis.org/oj/pro/355/
#include <iostream>

using namespace std;

int main(){
    int n,k,a; cin>>n>>k;
    int max=0,max2=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>max){
            if(a>max2){
                max2=max;
            }
            max=a;
        }else if(a>max2){
            max2=a;
        }
    }
    cout<<max2;
    return 0;
}
