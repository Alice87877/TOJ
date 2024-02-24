//https://toj.tfcis.org/oj/pro/461/
#include <iostream>

using namespace std;

int main(){
    int sum=0;
    double x,theta,m=0,h=0; cin>>x;
    for(int i=1;i<=60*12;i++){
        if(m==360) m=0;
        m+=6;
        h+=0.5;
        if(m>h) theta=m-h;
        else theta=h-m;
        if(theta==x||360-theta==x) sum++;
    }
    cout<<sum*2;

    return 0;
}
