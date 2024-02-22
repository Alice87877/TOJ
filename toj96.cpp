//https://toj.tfcis.org/oj/pro/96/

#include <iostream>
using namespace std;

int main(){
    int a,b;
    char x;
    cin>>a>>x>>b;
    if(x=='+'){
        cout<<a<<" + "<<b<<" = "<<a+b;
    }else if(x=='-'){
        cout<<a<<" - "<<b<<" = "<<a-b;
    }else if(x=='*'){
        cout<<a<<" * "<<b<<" = "<<a*b;
    }else{
        if(b==0){
            cout<<"ERROR";
        }else{
            cout<<a<<" / "<<b<<" = "<<a/b<<" ... "<<a%b;
        }
    }
    return 0;
}
