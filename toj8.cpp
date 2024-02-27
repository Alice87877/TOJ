//https://toj.tfcis.org/oj/pro/8/
#include <iostream>
using namespace std;

int main(){
    string s;
    int n;
    while(cin>>n){
        cin.ignore();
        getline(cin,s);
        int x=s.size()/n;
        for(int i=0;i<n;i++){
            for(int j=0;j<x;j++){
                cout<<s[i+n*j];
            }
        }
        cout<<"\n";
    }
    return 0;
}
