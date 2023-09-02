// Given an array of integers of size n . Answer q queries where you need to print 
// the sum of values in a given range of indices from l to r (both included).
// NOTE : The values of l and r in queries follow 1-based indexing .(indexing starts from 1)

//  { 5 , 1 , 2 , 3 , 4}
//   l=2   , r=4
//    ans = 1+2+3 = 6
// orrr psum_06.cpp

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector <int> v(n);
    for (int i=1;i<=n;i++){          // indexing start from 1 (i=1)
        cin>>v[i];
    }
    cout<<"Enter queries"<<endl;
    int Q;cin>>Q;
    while (Q--){
        cout<<"enter values";
        int l;cin>>l;
        int r;cin>>r;
        int p_l=0 , p_r=0;
        for (int i=1;i<=l-1;i++){
            p_l+=v[i];
        }
        for (int i=1;i<=r;i++){
            p_r+=v[i];
        }
        cout<<p_r - p_l<<endl;
    }
}

