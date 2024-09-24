//113年校內資訊能力競賽第二題
#include <bits/stdc++.h>
using namespace std;

string makeitsmaller(string input){
    int n=input.size();
    for(int i=0;i<n;i++){
        if(input[i]>='A' && input[i]<'a') input[i]+='a'-'A'; 
    }

    string ans="";
    for(int i=0;i<n;){
        char now=input[i];
        int times=1;
        while(i+times<n && input[i+times]==now){
            times++;
        }
        if(times>2){
            ans+=to_string(times);
        }else if(times==2){
            ans+=now;
        }
        ans+=now;
        i+=times;
    }

    return ans;
}

int main(){
    string input;
    while(cin>>input){
        cout<<makeitsmaller(input)<<'\n';
    }
}

//由於不知學校會不會公開這次的題目所以先放在我的notion裡

