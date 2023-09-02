// Given a matrix 'a' of dimensions nxm and 2 coordinates (x1,y1) and (x2,y2) . 
// Return the sum of rectangle from (x1,y1) to (x2,y2) .

// Method 2 : Pre-calculating the horizontal sum for each row in the Matrix.

#include<iostream>
#include<vector>
using namespace std;

void rectangleSum(vector<vector<int>> &v,int x1,int y1,int x2,int y2){
    int sum=0;
    for (int i=0;i<v.size();i++){
        for (int j=1;j<v[i].size();j++){
            v[i][j] += v[i][j-1];
        }
    }
    for (int i=x1 ; i<=x2 ;i++){
        if (y1!=0){
            sum+=(v[i][y2] - v[i][y1-1]);
        }
        else{
            sum+=v[i][y2];
        }
    }
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

    // printing prefix sum array row-wise 
    for (int i=0;i<v.size();i++){
        for (int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<"    ";
        }
        cout<<endl;
    }
}