// Rotation of matrix
// Given a square matrix ,turn it by 90 degrees in a clockwise direction 
// without using any extra space (array).

// 1 2 3      7 4 1
// 4 5 6 ---> 8 5 2
// 7 8 9      9 6 3

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &v){
    // transpose 
    for (int i=0;i<v.size();i++){
        for (int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    // reverse  row
    for (int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }

    return v;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n));

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    rotate(v);
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }

}