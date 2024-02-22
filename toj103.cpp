//https://toj.tfcis.org/oj/pro/103/

#include <iostream>
using namespace std;

int main(){
    string a,a1;
    string b,b1;
    cin>>b>>a>>b1>>a1;
    if(b==b1&&a==a1){
            cout<<"GOOD\n";
    }else if(b==b1||a==a1){
            cout<<"=~=\n";
    }else{
        cout<<"OTZ\n";
    }
    return 0;
}
