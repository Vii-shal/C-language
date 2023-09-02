#include<iostream>
using namespace std;

int main(){
    char alphabet;
    cin>>alphabet;

    switch (alphabet){
        case 'a': cout<<"vowels"<<endl;
        break;
        case 'e': cout<<"vowels"<<endl;
        break;
        case 'i': cout<<"vowels"<<endl;
        break;
        case 'o': cout<<"vowels"<<endl;
        break;
        case 'u': cout<<"vowels"<<endl;
        break;
        default : cout<<"not a vowel"<<endl;
        break;
    }
    return 0;
}