// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if (i==j){
//                 cout<<"v";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;

//     }
//     return 0;
// }




// pattern
//      x
//      x
//    xxxxx
//      x
//      x

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n+1)/2 || j==(n+1)/2){
                cout<<"@";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
}