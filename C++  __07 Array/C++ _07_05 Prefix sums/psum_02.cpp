// Given an integers array 'a' , return the prefix sum/ running sum 
// in the same array without creating a new array.
// { 5 , 4 , 1 , 2 , 3 }
// { 5 , 9 , 1 , 2 , 3 }
// { 5 , 9 , 10, 2 , 3 }
// { 5 , 9 , 10, 12, 15}

#include<iostream>
#include<vector>
using namespace std;

void running_sum(vector<int> &v){
    
    for (int i=1;i<v.size();i++){
        v[i]=v[i-1]+v[i];
    }
    return ;
}


int main(){
    int n;cin>>n;
    vector <int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    running_sum(v);
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}