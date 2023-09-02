#include<iostream>
using namespace std;

int main(){
    int arr[]={9,8,7,6,5};
    // for loop 
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

    // for each lopp 
    // print each element of array 
    for (int ele:arr){
        cout<<ele<<endl;
    }
    return 0;
}