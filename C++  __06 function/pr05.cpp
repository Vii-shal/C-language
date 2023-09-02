//given two numbers a and b , WAP to print all the prime numbers present between a and b?

#include<iostream>
using namespace std;

void prime(int a,int b){
        // int count=0;

    for(int i=a;i<b;i++){
        int count =0;
        for (int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if (count==0){
            cout<<i<<endl;
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;

}


