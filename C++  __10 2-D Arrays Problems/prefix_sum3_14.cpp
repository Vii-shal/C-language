// Given a matrix 'a' of dimensions nxm and 2 coordinates (x1,y1) and (x2,y2) . 
// Return the sum of rectangle from (x1,y1) to (x2,y2) .

// Method 2 : Pre-calculating the horizontal sum for each row in the Matrix.

#include<iostream>
#include<vector>
using namespace std;

void rectangleSum(vector<vector<int>> &v,int x1,int y1,int x2,int y2){
    int sum=0;
    // prefix sum row wise 
    for (int i=0;i<v.size();i++){
        for (int j=1;j<v[i].size();j++){
            v[i][j] += v[i][j-1];
        }
    }

    // prefix sum column wise 
    for (int i=1;i<v.size();i++){
        for (int j=0;j<v[i].size();j++){
            v[i][j] += v[i-1][j];
        }
    }

    // printing prefix sum 2d array 
    for (int i=0;i<v.size();i++){
        for (int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    int top_sum=0,left_sum=0,topleft_sum=0;
    if (x1!=0) top_sum = v[x1-1][y2];
    if (y1!=0) left_sum = v[x2][y1-1];
    if (x1!=0 && y1!=0) topleft_sum = v[x1-1][y1-1];

    sum = v[x2][y2] - top_sum - left_sum + topleft_sum;

    cout<<sum<<endl;

}

int main(){
    int r,c;
    cin>>r>>c;

    vector<vector<int>> v(r,vector<int> (c));
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }

    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    rectangleSum(v,x1,y1,x2,y2);

}