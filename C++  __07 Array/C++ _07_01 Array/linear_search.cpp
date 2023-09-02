
// linear search 
// finding a number in an array



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={4,8,3,9,11,2};
//     int n;
//     cin>>n;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int count=0;

//     for (int i=0;i<size;i++){
//         if (arr[i]==n){
//             cout<<arr[i]<<endl;
//             count++;
//         }
//     }
//     if (count==0){
//         cout<<"-1";
//     }
//     return 0;
// }




#include<iostream>
using namespace std;

int main(){
    int arr[]={4,8,3,9,11,2};
    int n=11;
    int ans=-1;

    for(int i=0;i<6;i++){
        if (n==arr[i]){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}