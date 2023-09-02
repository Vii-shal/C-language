#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if ( i==j || i==j-1 || i==j+1 || i+j==n || i+j==n-2 || i+j==n-1 ){
                cout<<"0";
            }
            else {
                cout<<"-";
            }
        }
        cout<<endl;
    }

}