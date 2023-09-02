
// memory and length of array 

#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,2,8,7,6};
    // memory taken by arr
    cout<<sizeof(arr)<<endl;
    // length of arr
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    int array2[4];
    cout<<array2[0]<<endl;    //garbage value
    cout<<array2[1]<<endl;    //garbage value
    cout<<array2[2]<<endl;    //garbage value
    cout<<array2[3]<<endl;    //garbage value
    return 0;
}