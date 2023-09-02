// Find the second largest element in the given array (function)


#include<iostream>
using namespace std;

int largestElementIndex(int arr[],int size){
    int max=INT16_MIN;             // Min or max value present in c++
    int maxIndex=-1;
    for(int i=0;i<size;i++){
        if (max<arr[i]){
            max=arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main(){
    int arr[]={2,3,5,7,6,7};
    int indexLargest = largestElementIndex(arr,6);
    // arr[indexLargest]=-1;

    int largestelement = arr[indexLargest];
    for(int i=0;i<6;i++){
        if (arr[i]==largestelement){
            arr[i]=-1;
        }
    }



    int indexSecondLargest=largestElementIndex(arr,6);
    cout<<" second largest no. : "<<arr[indexSecondLargest]<<endl;

    return 0;
}