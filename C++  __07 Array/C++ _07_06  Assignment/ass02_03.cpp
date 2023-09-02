// Given a vector arr[] sorted in increasing order of n size and an integer x , 
// Find if there exists a pair in the array whose sum is exactly x .

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={-2,-1,0,3,6,8,11,12};
//     int x=14;
//     int n=8;

//     bool ans=false;
//     int l=0;
//     int r=n-1;
//     while (l<r){
//         if (arr[l]+arr[r]==x){
//             ans = true;
//             break;
//         }
//         else if (arr[l]+arr[r] < x){
//             l++;
//         }
//         else {
//             r--;
//         }
//     }
//     if (ans==true){
//         cout<<"yes";
//     }
//     else {
//         cout<<"no";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;

int main(){
    int n ;cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter x";
    int x;cin>>x;

    int l=0;
    int r=sizeof(arr)/sizeof(arr[0]) -1;
    bool ans = false;

    while (l<r){
        if (arr[l]+arr[r]==x){
            ans=true;
            break;
        }
        else if(arr[l]+arr[r] < x){
            l++;
        }
        else{
            r--;
        }
    }
    if (ans==true){
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
    return 0;
}