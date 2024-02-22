//https://toj.tfcis.org/oj/pro/94/

#include <iostream>
using namespace std;

int main(){
    int x; cin>>x;
    if(x>=3&&x<=5){
        cout<<"Spring!";
    }else if(x>=6&&x<=8){
        cout<<"Summer!";
    }else if(x>=9&&x<=11){
        cout<<"Autumn!";
    }else{
        cout<<"Winter!";
    }
    return 0;
}
