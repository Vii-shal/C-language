#include<iostream>
using namespace std;

int main(){
    int i=1;
    int sum=0;
    int n;
    cin>>n;
    do{
        sum = sum + i;
        i++;
    }while(i<=n);
    cout<<sum<<endl;
    return 0;
}