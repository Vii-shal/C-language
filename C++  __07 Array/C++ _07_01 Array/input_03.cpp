#include<iostream>
using namespace std;

int main(){
    char vowels[5];
    // for (int i=0;i<5;i++){
    //     cin>>vowels[i];
    // }
    // for (int i=0;i<5;i++){
    //     cout<<vowels[i]<<"  ";
    // }

    for (char &ele:vowels){
        cin>>ele;
    }
    for (char ele:vowels){
        cout<<ele<<"  ";
    }


}