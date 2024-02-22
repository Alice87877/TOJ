//https://toj.tfcis.org/oj/pro/535/

#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    if(n<60) cout<<"F";
    else if(n<70) cout<<"D";
    else if(n<80) cout<<"C";
    else if(n<90) cout<<"B";
    else if(n<100) cout<<"A";
    else cout<<"S";
    return 0;
}
