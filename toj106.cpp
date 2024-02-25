//https://toj.tfcis.org/oj/pro/106/
#include <iostream>

using namespace std;

int main(){
    int n=2;
    while(n%71!=0){
        n*=2;
        n++;
    }
    if(n%3==0) cout<<"right";
    else cout<<"left";
    return 0;
}
