// WAR to display transpose of matrix.

#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int A[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }

    // transpose matrix
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++){
            cout<<A[j][i]<<"  ";
        }
        cout<<endl;
    }

}