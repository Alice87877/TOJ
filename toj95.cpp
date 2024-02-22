//https://toj.tfcis.org/oj/pro/95/

#include <iostream>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    if(a==1){
        if(b>=8){
            cout<<"PASS!";
        }else{
            cout<<"FAIL! You see see you!";
        }
    }else if(a==2){
        if(b>=9){
            cout<<"PASS!";
        }else{
            cout<<"FAIL! You see see you!";
        }
    }else{
        if(b>=10){
            cout<<"PASS!";
        }else{
            cout<<"FAIL! You see see you!";
        }
    }
    return 0;
}
