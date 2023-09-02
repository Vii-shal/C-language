// Given a positive integer n , generate an nxn matrix filled with elements 
// from 1 to n2 in spiral order .
//  n = 3
//  1  2  3
//  8  9  4
//  7  6  5


#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> createSpiralMatrix(int n){
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = n-1;

    int val=1;

    vector<vector<int>> v(n,vector<int> (n));

    int direction =0;
    while (top<=bottom && left<=right){
        if (direction == 0){
            for (int col=left ; col<=right ; col++){
                v[top][col]=val;
                val++;
            }
            top++;
        }
        if (direction == 1){
            for (int row=top ; row<=bottom ;row++){
                v[row][right]=val;
                val++;
            }
            right--;
        }
        if (direction == 2){
            for (int col=right ; col>=left ; col--){
                v[bottom][col]=val;
                val++;
            }
            bottom--;
        }
        if (direction == 3){
            for (int row=bottom ; row>=top ; row--){
                v[row][left]=val;
                val++;
            }
            left++;
        }
        direction = (direction+1)%4;
    }
    return v;
}

int main(){
    int n;cin>>n;
    vector<vector<int>> matrix(n,vector<int> (n));

    matrix = createSpiralMatrix(n);
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}