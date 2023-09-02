// There is a man going on  a trek . the trek consists of n+1 poinyts at different altitudes. 
// The man starts his trek on point 0 with altitude equal 0 . 
// You are given an integer array height of length n where height[i] is the net height in altitude between points i and i+1 for all (0<=i<n) . 
// Return the highest altitude of a point.

#include<iostream>
using namespace std;

int main(){
    // int height[] = {-5,-3,-2};
    // int n=3;
    int height[] = {-4,1,6,0,-8};
    int n=5;

    // int height[0]=0;
    int ans=0;
    for (int i=1;i<n;i++){
        height[i] += height[i-1];
        ans = max(ans,height[i]);

    }
    cout<<ans<<endl;
    for (int i=0;i<n;i++){
        cout<<height[i]<<"  ";
    }


}