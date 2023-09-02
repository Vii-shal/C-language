// find first n factorial numbers



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fact=1;
    if (n==0){
        fact =1;
        cout<<fact<<endl;
    }
    else{
        for (int i=1;i<=n;i++){
            fact*=i;
            cout<<fact<<endl;
        }
    }
    return 0;
    
}