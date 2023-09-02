#include<iostream>
#include<math.h>
using namespace std;

int  f(int n,int d){
    if (n>=0 && n<=9)  return n;

    int sum = (pow(n%10,d) + f(n/10,d));
    return sum;
    
}

int main(){
    int n;
    cin>>n;

    int digits = 0;
    int temp = n;
    while (temp > 0){
        temp/=10;
        digits++;
    }

    int result = f(n,digits);
    if(n==result){
        cout<<"yess"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;

}