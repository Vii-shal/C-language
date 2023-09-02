// WAP to calculate the factorial of a number


#include<iostream>
using namespace std;

int main(){
    int fact=1;
    int n;
    cin>>n;
    // if(n==0){
    //     fact=0;
    //     cout<<fact<<endl;
    // }
    for(int i=n;i>0;i--){
        fact = fact*i;
    }
    cout<<fact<<endl;
    return 0;
}