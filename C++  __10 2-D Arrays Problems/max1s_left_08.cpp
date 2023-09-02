// where each row is sorted . 
// Find the row with the maximum num

#include<iostream>
#include<vector>
using namespace std;

int leftMostOneRow(vector<vector<int>> &v){
    int leftMostOne =-1;
    int maxonesRow =-1;
    int j=v[0].size()-1;

    // finding leftmost one in 0th row 
    while (j>=0 && v[0][j]==1){
        leftMostOne=j;
        maxonesRow=0;
        j--;
    }

    // check in rest of rows if we can find a one left to the leftMostOne
    for (int i=1;i<v.size();i++){
        while (j>=0 && v[i][j]==1){
            leftMostOne=j;
            j--;
            maxonesRow=i;
        }
    }
    return maxonesRow;
}



// int maxOnesRow(vector<vector<int>> &v){
//     int maxOneRow = -1;
//     int index=80000000;
//     int j;

//     for (int i=0;i<v.size();i++){
//         for ( j=v[i].size()-1;j>=0;j--){
//             if (v[i][j]==1 && j<index){
//                 index = j;
//                 maxOneRow=i;
//             }
            
//         }
//         j=index;
//     }
//     return maxOneRow;
// }

int main(){
    int r,c;
    cin>>r>>c;

    vector<vector<int>> v(r,vector<int> (c));

    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }

    // int ans = maxOnesRow(v);
    int ans = leftMostOneRow(v);
    cout<<ans<<endl;
}