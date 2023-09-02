// Given an integer array (arr) and its size (n) ,
//  print the count of odd and even integers present in the array.

#include<iostream>
using namespace std;


int main(){
    int n;cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int even_no=0;
    int odd_no=0;
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            even_no++;
        }
        else {
            odd_no++;
        }
    }
    cout<<"Number of even elements : "<<even_no<<endl;
    cout<<"Number of odd elements : "<<odd_no<<endl;

    return 0;
}