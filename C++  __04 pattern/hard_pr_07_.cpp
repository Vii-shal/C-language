// pattern
//      2
//     2 4
//    2 4 6
//   2 4 6 8
//  2 4 6 8 10
     



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=2*i-1;j++){
            
            if (j%2==0){
                cout<<j;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;

    }
    return 0;


}