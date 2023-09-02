// // Given an integer array and its size ,
// // find the sum of the greatest and the smallest integer present in the array . 

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int max=INT16_MIN;
//     for (int i=0;i<n;i++){
//         if (arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"maximum element : "<<max<<endl;
//     int min=INT16_MAX;
//     for (int i=0;i<n;i++){
//         if (arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"minimum element : "<<min<<endl;

//     cout<<"sum of greatest and smallest is :"<<max+min<<endl;
//     return 0;
// }




#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int min_val=INT16_MAX;
    int max_val=INT16_MIN;
    for (int i=0;i<n;i++){
        min_val = min(min_val,arr[i]);
        max_val = max(max_val,arr[i]);
    }
    int ans = min_val+max_val;
    return ans;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum is : "<<sum(arr,n);

    return 0;
}