
//pattern
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<char(65+j-1);
        }
        cout<<endl;
    }
    for (int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(n-i)*2-1;j++){
            cout<<char(65+j-1);
        }
        cout<<endl;
    }
    return 0;
}