// convert binery to decimal





#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int digit;
    int dec = 0;
    int power=1;

    while (n>0){
        digit = n%10;
        dec += digit*power;
        power *= 2;
        n/=10;
    }
    cout<<dec<<endl;
    return 0;

}