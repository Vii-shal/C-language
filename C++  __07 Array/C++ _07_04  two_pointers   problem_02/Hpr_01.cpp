// Sort an array consisting of only 0s and 1s

#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &v){
    int count=0;
    for (int ele:v){
        if (ele==0){
            count++;
        }
    }
    for (int i=0;i<v.size();i++){
        if (i<count){
            v[i]=0;
        }
        else {
            v[i]=1;
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
    for (int i=0;i<v.size();i++){
        cout<<v[i];
    }

    return 0;
}