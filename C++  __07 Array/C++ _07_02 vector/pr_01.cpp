// Find last occurence of an element x in a given array 

#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,6,2,9,2,4,5,5,6};
    int x;
    cin>>x;
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int large = 0;
    while (i<size){
        if(arr[i]==x){
            if (i>large){
                large=i;
            }
        }
        i++;
    }
    cout<<large<<endl;
    return 0;
}
