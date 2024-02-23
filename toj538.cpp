//https://toj.tfcis.org/oj/pro/538/

#include <iostream>
using namespace std;

int main(){
    double a,b,c,d,e,f,sum=0;
    cin>>a>>b>>c>>d>>e>>f;
    sum+=20*(a*1.25+b*2+c)/63.75;
    sum+=(d+e)*0.4;
    if(sum>=f) cout<<"YA";
    else cout<<"QQ";
    return 0;
}
