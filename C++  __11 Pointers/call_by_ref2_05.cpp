#include<iostream>
using namespace std;

void  findFirstAndLast(string s,char ch,int *pf,int *pl){
    for (int i=0;i<s.size();i++){
        if (s[i] == ch){
            *pf = i;
            break;
        }
    }
    for (int i=s.size()-1;i>=0;i--){
        if (s[i]==ch){
            *pl = i;
            break;
        }
    }
}

int main(){
    string s ="aaabac";
    char ch = 'a';
    int first = -1;
    int last = -1;

    int *pf = &first;
    int *pl = &last;

    findFirstAndLast(s,ch,pf,pl);

    cout<<*pf<<"  "<<*pl<<endl;
    cout<<first<<"  "<<last<<endl;
    return 0;
}