// pattern
//       1
//      123
//     12345
//    1234567
//     12345
//      123
//       1


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
            cout<<j;
        }
        cout<<endl;
    }
    for (int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=(n-i)*2-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}