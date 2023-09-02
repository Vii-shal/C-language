// Heart


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
 
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i+j==n+1 ){
                cout<<"v";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1;j<=n;j++){
            if (i==j ){
                cout<<"v";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1;j<=n;j++){
            if (i+j==n+1 ){
                cout<<"v";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1;j<=n;j++){
            if (i==j ){
                cout<<"v";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
   
    for (int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            if(i==j){
                cout<<"v";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<=2*n;j++){
            if(i+j==2*n+1){
                cout<<"v";
            }
            else{
                cout<<" ";
            }


        }
        cout<<endl;
    }
    
    return 0;
}