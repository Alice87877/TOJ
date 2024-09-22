//113年校內資訊能力競賽第一題
#include <bits/stdc++.h>
using namespace std;

map <int,char> m{
    {0,'Z'},
    {1,'S'},
    {2,'G'},
    {3,'H'}
};

int main(){
    int input;
    while(cin>>input){
        string ans="";
        if(input==0) ans=m[0];
        while(input>0){
            ans=m[input%4]+ans;
            input/=4;
        }
        cout<<ans<<'\n';
    }
}

//由於不知學校會不會公開這次的題目所以先方在我的notion裡

