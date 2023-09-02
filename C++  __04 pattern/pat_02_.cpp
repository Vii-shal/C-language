
// rectangular pattern





// #include<iostream>
// using namespace std;

// int main(){
//     for (int i=1;i<=4;i++){
//         for(int j=1;j<=6;j++){
//             if (i!=1 && i!=4 && j!=1 && j!=6 ){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
    
// }



#include<iostream>
using namespace std;

int main(){
    int row;
    int col;
    cin>>col;
    cin>>row;

    for (int i=1 ; i<=col ;i++){
        for (int j=1 ; j<=row ; j++){
            if(i!=1 && j!=1 && i!=col && j!=row){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}