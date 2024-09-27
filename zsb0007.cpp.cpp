//http://203.68.236.9/problem/b0007
//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756
#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> d;
    string input,word;
    while(getline(cin,input)){
        for(int i=0;i<input.size();i++){
            if(isalpha(input[i])){
                input[i]=tolower(input[i]);
            }else{
                input[i]=' ';
            }
        }

        stringstream ss(input);
        while(ss>>word){
            d.insert(word);
        }
    }
    for(set<string>::iterator it=d.begin();it!=d.end();it++){
            cout<<*it<<'\n';
    }
}

/*
Andy，8歲，有一個夢想——他想製作自己的字典。這對他來說並不容易，因為他所知道的單詞數量並不多。
因此，與其自己想出所有的單詞，他有了一個絕妙的主意。他從書架上挑選出他最喜愛的一本故事書，從中抄錄下所有不同的單詞。
通過按字母順序排列這些單詞，他的字典就完成了！當然，這是一項非常耗時的工作，因此電腦程式在這裡非常有幫助。
你被要求編寫一個程式，列出輸入文本中所有不同的單詞。在這個問題中，單詞被定義為一連串連續的字母（包括大寫和小寫）。
只有一個字母的單詞也應該被考慮。此外，程式必須大小寫不敏感。例如，“Apple”、“apple”或“APPLE”應被視為相同的單詞。

輸入文件包含最多5000行文本。每行最多200個字符。輸入以 EOF 結束。

輸出應該列出輸入文本中出現的所有不同的單詞，每行一個。
所有單詞都應轉換為小寫，並按字母順序排列。你可以確信文本中不同單詞的數量不會超過5000個。
*/
