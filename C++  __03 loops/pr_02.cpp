#include<iostream>
using namespace std;

int main(){
    for (int i=100;i<500;i++){
        int sum = 0;
        int k=i;
        int z=i;
        int digit;

        while (z>0){
        digit = z%10;
        sum = sum + digit*digit*digit;
        z/=10;
        }

        if (sum!=k){
            continue;
        }
            cout<<"armstrong number is : "<<k<<endl;
    }
    return 0;
}