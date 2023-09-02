// Given a matrix 'a' of dimensions nxm and 2 coordinates (x1,y1) and (x2,y2) . 
// Return the sum of rectangle from (x1,y1) to (x2,y2) .

// Method 1 : Brute force 

#include<iostream>
#include<vector>
using namespace std;

void rectangleSum(vector<vector<int>> &v,int x1,int y1,int x2,int y2){
    int sum=0;
    for (int i=x1 ;i<=x2;i++){
        for (int j=y1 ; j<=y2 ;j++){
            sum+= v[i][j];
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

}