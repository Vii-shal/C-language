#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    
    for (int i=0,j=num ; i<num,j>0 ; i++,j--){
        num = i+j;
        for (int k=2;k<num;k++){
            if (i%k!=0 && j%k!=0){
                cout<<num<<"="<<i<<"+"<<j<<endl;
                continue;
            }
        }
    }
    return 0;

}