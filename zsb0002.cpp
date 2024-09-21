//http://203.68.236.9/problem/b0002
//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3252
#include <bits/stdc++.h>
using namespace std;

struct printthing{
    int num;
    bool isme;
};

int main(){
    vector<printthing> vec;
    int N;
    cin>>N;
    while(N--){
        vec.clear();
        int n,me,time=0;
        cin>>n>>me;
        for(int i=0;i<n;i++){
            int a;
            printthing pr;
            cin>>a;
            pr.num=a;
            if(i==me) pr.isme=1;
            else pr.isme=0;
            vec.push_back(pr);
        }

        while(true){
            bool donow=1;
            printthing now,pr;
            now=vec[0];
            for(int i=1;i<vec.size();i++){
                pr=vec[i];
                if(pr.num>now.num){
                    donow=0;
                    break;
                }
            }
            if(donow){
                time++;
                if(now.isme==1) break;
                vec.erase(vec.begin());
            }else{
                vec.push_back(vec[0]);
                vec.erase(vec.begin());
            }
        }
        cout<<time<<'\n';
        
    }
}