// find the maximum value out of all the elements in the array 


#include<iostream>
using namespace std;

int main(){
    int arr[]={6,5,8,11,1,99};
    int size=sizeof(arr)/sizeof(arr[0]);
    int large=arr[0];

    for (int i=0;i<size;i++){
        
        if (large<arr[i]){
            large=arr[i];
        }
    }
    cout<<large;
    return 0;
}