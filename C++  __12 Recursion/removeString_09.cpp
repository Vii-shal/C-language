// // erase a charater of an string ----------------------------------------------

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     string s="abcax";
//     remove(s.begin(),s.end(),'a');  // remove or erase  ist 'a' from string
//     cout<<s<<endl;
//     s.erase(remove(s.begin(),s.end(),'a'),s.end());  // erase all 'a' from string
//     cout<<s;
// }


// ________________________________________________________________________________

#include<iostream>
using namespace std;

string f(string &s,int i,int n){
    if (i==n)  return "";
    string curr = "";
    curr += s[i];
    return ((s[i]=='a')?"":curr) + f(s,i+1,n);

} 

int main(){
    string s="abcax";
    cout<<f(s,0,5);
}


