#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums[]={1,3,5,7};
    int n=4 ;
    vector<int> ans(n);
    int pre[n];
    pre[0]=nums[0];
    int pos[n];
    pos[n-1]=nums[n-1];

    for (int i=1;i<n;i++){
        pre[i] = nums[i]*pre[i-1]; 
    }

    for (int i=n-2;i>=0;i++){
        pos[i] = pos[i+1]*nums[i];
    }

    for (int i=0;i<n-1;i++){
        if (i==0){
            ans[0]=pos[1];
        }
        else{
            ans[i]=pos[i+1]*pre[i-1];
        }
    }
    ans[n-1]=pre[n-2];

    for (int i=0;i<n;i++){
        cout<<ans[i]<<"  ";
    }
}