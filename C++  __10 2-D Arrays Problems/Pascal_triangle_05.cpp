// Given a integer n , return the first n rows of pascal's triangle .   
    //        1
    //       1 1
    //      1 2 1
    //     1 3 3 1
    //    1 4 6 4 1
//   Method 1


#include<iostream>
using namespace std;

int fact(int x){
    int fact=1;
    if(x==0){
        return 1;
    }
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    cin>>n;
    int pascal[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            pascal[i][j] = fact(i)/(fact(j)*fact(i-j));
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout<<" ";
        }
        for (int j=0;j<=i;j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }

    
}