// print max value element in an array 

#include<iostream>
using namespace std;
 
int f(int *arr,int i,int n){
    if (i==n-1)  return arr[i];
    int max_val;
    max_val=max(arr[i],f(arr,i+1,n));
    return max_val;

}

int main(){
    int arr[]={4,8,6,2,5};
    int ans = f(arr,0,5);
    cout<<ans;
}