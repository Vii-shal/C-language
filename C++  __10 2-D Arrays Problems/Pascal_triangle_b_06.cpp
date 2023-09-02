// // Given a integer n , return the first n rows of pascal's triangle .   
//     //        1
//     //       1 1
//     //      1 2 1
//     //     1 3 3 1
//     //    1 4 6 4 1
// //   Method 2
// //   using adittion .

// #include<iostream>
// using namespace std;

// int main(){
//     int n;cin>>n;
//     int ans[n][n];

//     for (int i=0;i<n;i++){
//         for (int j=0;j<=i;j++){
//             if (j==0 || i==j){
//                 ans[i][j]=1;
//             }
//             else{
//                 ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
//             }
//         }
//     }

//     for (int i=0;i<n;i++){
//         for (int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for (int j=0;j<=i;j++){
//                 cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



// vector


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pascalTriangle(int n){

    vector<vector<int>> pascal(n);
    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);
        for (int j=0;j<=i;j++){
            if (i==j || j==0){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]=pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

int main(){
    int n;cin>>n;
    vector<vector<int>> ans;
    ans = pascalTriangle(n);

    for (int i=0;i<ans.size();i++){
        for (int j=0;j<=i;j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }

}