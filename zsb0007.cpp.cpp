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
Andy�A8���A���@�ӹڷQ�X�X�L�Q�s�@�ۤv���r��C�o��L�ӻ��ä��e���A�]���L�Ҫ��D������ƶq�ä��h�C
�]���A�P��ۤv�Q�X�Ҧ�������A�L���F�@�ӵ������D�N�C�L�q�Ѭ[�W�D��X�L�̳߷R���@���G�ƮѡA�q���ۿ��U�Ҧ����P������C
�q�L���r�����ǱƦC�o�ǳ���A�L���r��N�����F�I��M�A�o�O�@���D�`�Ӯɪ��u�@�A�]���q���{���b�o�̫D�`�����U�C
�A�Q�n�D�s�g�@�ӵ{���A�C�X��J�奻���Ҧ����P������C�b�o�Ӱ��D���A����Q�w�q���@�s��s�򪺦r���]�]�A�j�g�M�p�g�^�C
�u���@�Ӧr��������]���ӳQ�Ҽ{�C���~�A�{�������j�p�g���ӷP�C�Ҧp�A��Apple���B��apple���Ρ�APPLE�����Q�����ۦP������C

��J���]�t�̦h5000��奻�C�C��̦h200�Ӧr�šC��J�H EOF �����C

��X���ӦC�X��J�奻���X�{���Ҧ����P������A�C��@�ӡC
�Ҧ���������ഫ���p�g�A�ë��r�����ǱƦC�C�A�i�H�T�H�奻�����P������ƶq���|�W�L5000�ӡC
*/
