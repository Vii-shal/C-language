// Find second largest element in an array 

#include<iostream>
using namespace std;

int largest(int arr[],int size){
    int max=INT16_MIN;
    int secondmax=INT16_MIN;

    for(int i=0;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    for (int i=0;i<size;i++){
        if (arr[i]>secondmax && arr[i]!=max){
            secondmax=arr[i];
        }
    }
    return secondmax;
}

int main(){
    int arr[]={5,7,7,6,7,4};
    int secondlarge=largest(arr,6);
    cout<<"second largest : "<<secondlarge;

    return 0;
}