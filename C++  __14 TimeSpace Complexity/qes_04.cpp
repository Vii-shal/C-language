#include<iostream>
using namespace std;

int main(){
    int n=5;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"x";                                // O(n^2)
        }
        cout<<endl;
    }
    return 0;
}



#include<iostream>
using namespace std;

int main(){
    int n=5;
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){                         // total inst => 0+1+2+3+ ... +(n-1)  = n(n-1)/2   =  (n^2)/2 -n/2  = n^2                  
            cout<<"x";                                // O(n^2)
        }
        cout<<endl;
    }
    return 0;
}