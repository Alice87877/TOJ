//https://zerojudge.tw/ShowProblem?problemid=c012
//http://203.68.236.9/problem/b0013
#include<bits/stdc++.h>
using namespace std;

struct owo{
    int a,times;
};

bool cmp(owo a,owo b){
    if(a.times==b.times){
        return a.a>b.a;
    }
    return a.times<b.times;
}

int main(){
    string s;
    vector<int> time(200);
    vector<owo> vec;
    while(getline(cin,s)){
        for(int i=0;i<200;i++) time[i]=0;
        for(int i=0;i<s.size();i++){
            time[s[i]]++;
        }
        vec.clear();
        for(int i=0;i<200;i++){
            if(time[i]!=0){
                owo n;
                n.a=i;
                n.times=time[i];
                vec.push_back(n);
            }
        }
        sort(vec.begin(),vec.end(),cmp);
        for(int i=0;i<vec.size();i++){
            cout<<vec[i].a<<' '<<vec[i].times<<'\n';
        }
        cout<<'\n';
    }
}