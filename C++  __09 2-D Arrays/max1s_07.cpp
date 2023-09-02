// Given a boolean 2D array , where each row is sorted . 
// Find the row with the maximum number of 1s.

// 0 0 1 1
// 0 1 1 1
// 0 0 0 1
// ans : maxOnesRow=1;



#include<iostream>
#include<vector>
using namespace std;


int maxOnesRow(vector<vector<int>> &v){
    int maxOnes = INT16_MIN;
    int maxOnesRow = -1;

    for (int i=0;i<v.size();i++){
        for (int j=0;j<v[i].size();j++){
            if (v[i][j]==1){
                int numOfOnes = v[i].size()-j;
                if (numOfOnes > maxOnes){
                    maxOnes = numOfOnes;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}

int main(){
    int r,c;
    cin>>r>>c;

    vector <vector<int>> v(r,vector<int>(c));
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }

    int res=maxOnesRow(v);
    cout<<res<<endl;

}