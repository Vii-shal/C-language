// Given an array of integers of size n . Answer q queries where you need to print 
// the sum of values in a given range of indices from l to r (both included).
// NOTE : The values of l and r in queries follow 1-based indexing .(indexing starts from 1)

//  { 5 , 1 , 2 , 3 , 4}
//   l=2   , r=4
//    ans = 1+2

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector <int> v(n);
    for (int i=1;i<=n;i++){
        cin>>v[i];
    }

    for (int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    cout<<"Enter queries"<<endl;
    int q;
    cin>>q;
    while(q--){
        cout<<"Enter value"<<endl;
        int l,r;
        cin>>l>>r;
        int ans = 0;
        ans = v[r] - v[l-1];
        cout<<"range sum : "<<ans<<endl;
    }
    return 0;
}