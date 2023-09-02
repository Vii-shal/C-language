// find that there  2 subarray exist or not , in which,
// prefix_sum == suffix_sum. 
// { 5 , 4 , 6 , 2 , 1 }
// { 5 , 4 } , { 6 , 2 , 1 }
// 9==9


#include<iostream>
#include<vector>
using namespace std;

int subarrays(vector<int> &v){
    int t_sum=0;
    int s_sum;

    for(int i=0;i<v.size();i++){
        t_sum += v[i];
    }
    cout<<" t_sum "<<t_sum<<endl;
    int n=1;
    while (n<=v.size()){
        int p_sum=0;
        for(int i=0;i<n;i++){
            p_sum += v[i];
        }
        cout<<" p_sum "<<p_sum<<endl;

        s_sum = t_sum - p_sum;
        if (p_sum==s_sum){
            cout<<"subarrays exist"<<endl;
        }
        n++;
    }
}

int main(){
    int n;cin>>n;
    vector<int> v(n);

    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    subarrays(v);
    return 0;

}




// orr p_sum_03   for easy method;