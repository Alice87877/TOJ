//https://toj.tfcis.org/oj/pro/114/
#include <iostream>
using namespace std;

int a[5][6];
bool flag=false;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=2;j<6;j++){
            if(a[i][j]==a[i][j-1] && a[i][j-1]==a[i][j-2]) flag=true;
        }
    }
    for(int i=0;i<6;i++){
        for(int j=2;j<5;j++){
            if(a[j][i]==a[j-1][i] && a[j-1][i]==a[j-2][i]) flag=true;
        }
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
    return 0;
}
