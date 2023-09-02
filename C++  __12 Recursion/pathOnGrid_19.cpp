// The problem is to count all the possible paths on an mXn grid fron top left (grid[0][0]) to bottom right (grid[m-1][n-1]).
// having constraints that from each cell you can move only to right or down .

#include<iostream>
using namespace std;

int f(int m,int n,int i,int j){
    if (i==m-1 && j==n-1)  return 1;
    if (i>=m || j>=n)  return 0;
    return  (f(m,n,i+1,j) + f(m,n,i,j+1)); 
}

int main(){
    cout<<f(3,3,0,0);

}