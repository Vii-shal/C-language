// find the unique number in a given array where 
// all the elements are being repeated twice with one value 


// array manupulation ----> array ki value or element ko dusri koi value
//  assign kerte haa , taki hum apne answer ke pass jaldi aur 
// easily pahunch paye
// eg.  { 2 , 3 , 1 , 3 , 2 , 4 }
//       -1  -1  -1  -1  -1


#include<iostream>
using namespace std;

int main(){
    int arr[]={2,9,7,3,3,2,7};

    int size=7;
    // int count=0;

    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for (int i=0;i<size;i++){
        if(arr[i]!=-1){
            cout<<" unique number is : "<<arr[i];
        }
    }
}