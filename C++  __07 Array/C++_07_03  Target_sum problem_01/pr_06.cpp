// Rotate the given array "a" by k steps , where k is non-negative .
// Note : k can be greater than n as well where n is the size of array "a" .
// by building extra array 

#include<iostream>
using namespace std;

int rotate(int arr[] , int size , int key){
    int arr2[size];

    int k = key%size;

    // inserting last k elements  in arr2
    for (int i=size-k , j=0 ; i<size,j<k ; i++,j++){
        arr2[j]=arr[i];
    }

    // inserting first n-k elements in arr2 
    for(int i=0 , j=k ; i<k ,j<size ; i++,j++){
        arr2[j]=arr[i];
    }
    

    for (int i=0;i<size;i++){
        cout<<arr2[i];
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6};
    rotate(arr,6,10);

}