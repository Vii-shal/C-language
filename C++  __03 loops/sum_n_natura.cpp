#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    int sum=0;
    cin>>n;
    while (i<=n){
        sum += i;
        i++;
        cout<<sum<<endl;
    }
    return 0;
}