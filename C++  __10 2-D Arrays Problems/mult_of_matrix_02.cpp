// Program to display multiplication of 2 matrix

#include <iostream>
using namespace std;

int main()
{
    cout << "matrix1" << endl;
    int r1, c1;
    cin>>r1>>c1;

    int A[r1][c1];
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cin >> A[i][j];
        }
    }

    cout << "matrix2" << endl;
    int r2, c2;
    cin>>r2>>c2;
    int B[r2][c2];
    for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
            cin >> B[i][j];
        }
    }

    if (c1 != r2){
        cout << "Multiplication of matrix not possible" << endl;
    }

    else{
        // answer matrix
        int ans[r1][c2];

        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c2; j++){
                int ele = 0;
                for (int k = 0; k < c1; k++){
                    ele += A[i][k] * B[k][j];
                }
                ans[i][j] = ele;
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << ans[i][j] << "  ";
            }
            cout << endl;
        }
    }
}