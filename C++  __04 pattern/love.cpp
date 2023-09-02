#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i==n || j==1){
                cout<<"|";
            }
            else{
                cout<<" ";
            }
        }

        for (int j=1;j<=n;j++){
            if (i==1 || i==n || j==n ||j==1){
                cout<<"|";
            }
            else{
                cout<<" ";
            }
        }
        for (int j=1;j<=n;j++){
            if (i==j){
                cout<<"|";
            }
            else{
                cout<<" ";
            }
        }
        for (int j=1;j<=n;j++){
            if (i+j==n+1){
                cout<<"|";
            }
            else{
                cout<<" ";
            }
        }
        for (int j=1;j<=n;j++){
            if (i==1 || i==n || j==1 || i==n+1/2){
                cout<<"|";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}