// find that there  2 subarray exist or not , in which,
// prefix_sum == suffix_sum. 
// { 5 , 4 , 6 , 2 , 1 }
// { 5 , 4 } , { 6 , 2 , 1 }
// 9==9
// easy way:


#include<iostream>
#include<vector>
using namespace std;

bool subarrays_sum(vector <int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }

    int prefix_sum=0;
    for (int i=0;i<v.size();i++){
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;
        if (suffix_sum==prefix_sum){
            return true;
        }
    }
    return false;
}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<subarrays_sum(v)<<endl;
    return 0;
}