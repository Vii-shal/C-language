
// pattern
//      x
//     xxx
//    xxxxx
//   xxxxxxx
//  xxxxxxxxx
//   xxxxxxx
//    xxxxx
//     xxx
//      x





#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=2*i-1 ; j++){
            cout<<"x";
        }
        cout<<endl;    
    }
    for (int i=1;i<=n-1;i++){
        for (int j=1;j<=i;j++){
            cout<<" ";
        }
        for (int j=1;j<=(n-i)*2-1 ; j++){
            cout<<"x";
        }
        cout<<endl;    
    }
    
    return 0;
}