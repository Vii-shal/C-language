#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[6]={2,5,8,3,1,2};

    int sum_odd=0;
    int sum_even=0;

    for (int i=0,j=1 ; i<6,j<6 ; i=i+2,j=j+2){      // i=even , j=odd
        sum_odd+=arr[j];
        sum_even+=arr[i];
    }
    cout<<"diff : "<<sum_even-sum_odd<<endl;

 
//    int sum=0;
//    for(int i=0;i<6;i++){
//     if (i%2==0){
//         sum+=arr[i];
//     }
//     else{
//         sum-=arr[i];
//     }

//    }
//    cout<<"diff iss : "<<sum;
}
    