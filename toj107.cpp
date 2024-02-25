//https://toj.tfcis.org/oj/pro/107/
#include <iostream>

using namespace std;

int main(){
    int sum=0;
    for(int i=1;i<=30;i++){
        sum+=i+1;
        sum+=(1+i)*i*i/2;
        }
    cout<<sum;
    return 0;
}
