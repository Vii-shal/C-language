#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,5,9,1,8,2,};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum =0;

    for (int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
    return 0;
}