// Given an integers array 'a' ,return the prifix sum .
//  { 5 , 4 , 1 , 2 , 3 }        -->input
//  { 5 , 9 , 10, 12, 15}        -->output
 
#include<iostream>
#include<vector>
using namespace std;

int prefix_sum(vector<int> &v){
    vector<int> ans;
    int left_ptr=0;
    int right_ptr=v.size()-1;

    int ele = 0;
    for (int i=0;i<v.size();i++){
        ele+=v[i];
        ans.push_back(ele);
    }

    for (int i=0;i<v.size();i++){
        cout<<ans[i]<<"  ";
    }
}


int main(){
    int n;cin>>n;
    vector <int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    prefix_sum(v);
    return 0;
}