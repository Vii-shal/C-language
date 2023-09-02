


#include<iostream>
using namespace std;

bool f(int *arr,int n,int i,int x){
    if (i==n)  return 0;
    return  (arr[i]==x) || f(arr,n,i+1,x);

}

int main(){
    int arr[]={4,12,54,14,3,8,6,1};
    int n=8 , x=14;
    
    cout<<f(arr,n,0,x)<<endl;
    int result = f(arr,n,0,x);
    if(result) cout<<"yes";
    else   cout<<"no";
    
}