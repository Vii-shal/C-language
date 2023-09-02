// Find the total number of pairs in the array whose sum is equal 
// to the given value of x.


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={3,4,6,7,1};

    cout<<"enter x ";
    int x;
    cin>>x;

    int count=0;

    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (x==arr[i]+arr[j]){
                count++;
            }
        }
    }
    cout<<"Total pairs : "<<count;
    return 0;

}


