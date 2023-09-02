// Given an (m X n) matrix 'a' ,return all elements of the matrix in spiral order .
// 1  2  3  4
// 5  6  7  8    ---->  1  2  3  4  8  12  11  10  9  5  6  7
// 9 10 11 12 

#include<iostream>
#include<vector>
using namespace std;

void spiral(vector<vector<int>> &v){
    int left=0;
    int right=v[0].size()-1;
    int top=0;
    int bottom=v.size()-1;
 
    int direction =0;
    while (left<=right && top<=bottom){
        // left ---> right
        if (direction == 0){
            for (int col=left ; col<=right ; col++){
                cout<<v[top][col]<<" ";
            }
            top++;
        }
        // top --->  bottom
        else if (direction == 1){
            for (int row=top ; row<=bottom ; row++){
                cout<<v[row][right]<<" ";
            }
            right--;
        }
        // right ---> left
        else if (direction == 2){
            for (int col=right ; col>=left ; col--){
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }
        // bottom ---> top
        else {
            for (int row=bottom ; row>=top ; row--){
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        direction = (direction+1)%4;      // 0 1 2 3
    }
}

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> v(r,vector<int> (c));

    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }

    spiral(v);
}
