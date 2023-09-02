// sort an array consisting of 0s and 1s

#include<iostream>
#include<vector>
using namespace std;

int sort(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while (left_ptr<right_ptr){
        if (v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        if (v[left_ptr]==0){
            left_ptr++;
        }
        if (v[right_ptr]==1){
            right_ptr--;
        }
    }
}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    
    sort(v);
    for (int ele:v ){
        cout<<ele<<" ";
    }
    return 0;
}

