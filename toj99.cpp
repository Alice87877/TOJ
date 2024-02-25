//https://toj.tfcis.org/oj/pro/99/
#include <iostream>

using namespace std;

int main(){
    double a,b,c,d;
    double eps=0.0000001;
    cin>>a>>b>>c>>d;
    double n=a*d-b*c;
    if(n<eps && n>-eps) cout<<"0\n";
    else cout<<"1\n";

    return 0;
}
