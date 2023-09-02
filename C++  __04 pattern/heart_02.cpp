// Heart


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

 
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i+j==n+1 ){
                cout<<"vishal";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1;j<=n;j++){
            if (i==j ){
                cout<<"vishal";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1;j<=n;j++){
            if (i+j==n+1 ){
                cout<<"vishal";
            }
            else {
                cout<<" ";
            }
        }
        for(int j=1;j<=n;j++){
            if (i==j ){
                cout<<"vishal";
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
                cout<<"vishal";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<=2*n+12;j++){
            if(i+j==2*n+12+1){
                cout<<"vishal";
            }
            else{
                cout<<" ";
            }


        }
        cout<<endl;
    }
    
    return 0;
}