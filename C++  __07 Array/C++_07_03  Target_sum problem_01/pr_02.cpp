// Count the number of triplets ehose sum is equal to the given value x.


#include<iostream>
using namespace std;

int main(){
    int arr[]={3,1,2,4,0,6};

    int x=6;
    int count=0;
    int size=6;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for (int k=j+1; k<size ; k++)
            {
                if(x==arr[i]+arr[j]+arr[k]){
                    count++;
                }
            }
            
        }
    }
    cout<<count<<endl;
}