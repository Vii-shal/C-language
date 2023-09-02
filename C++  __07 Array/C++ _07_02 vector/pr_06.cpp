// check if the given array is sorted or not 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[6]={1,2,8,4,5,6};
    bool sort=true;
    for(int i=1;i<6;i++){
        if (arr[i]<=arr[i-1]){
            sort=false;
        }
    }
    cout<<sort;
    return 0;
}