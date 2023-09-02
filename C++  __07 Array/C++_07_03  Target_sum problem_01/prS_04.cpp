#include<iostream>
using namespace std;

int larg(int arr[],int size){
    int max=INT16_MIN;
    int ind=-1;
    for(int i=0;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
            ind=i;
        }
    }
    return ind;
}

int main(){
    int arr[]={2,5,1,7,6,7};
    int index=larg(arr,6);

    int largest = arr[index];
    for(int i=0;i<6;i++){
        if (arr[i] == largest){
            arr[i]=-1;
        }
    }
    
    int indexSecond=larg(arr,6);
    cout<<"second largest : "<<arr[indexSecond];

    return 0;
}