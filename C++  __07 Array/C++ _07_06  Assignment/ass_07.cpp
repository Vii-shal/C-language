// given an array in increasing order , find the missing kth element.
// {2,3,4,7,11}
// k=5  missing kth element = 9

#include<iostream>
#include<vector>
using namespace std;

int findKth(vector<int> &v,int k){
    int low=0;
    int high = v.size()-1;
    int mid;
    while (low<=high){
        mid = (low+high)/2;
        if (v[mid]-(1+mid)<k){
            low=mid+1;
        }
        else{
            high=mid -1;
        }
    }
    return low + k;
    
}

int main(){
    int n;cin>>n;
    vector <int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<findKth(v,3);
    return 0;
}