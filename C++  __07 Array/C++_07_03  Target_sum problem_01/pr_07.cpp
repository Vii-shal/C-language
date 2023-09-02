// Rotate the given array "a" by k steps , where k is non-negative .
// Note : k can be greater than n as well where n is the size of array "a" .
// without building extra array.

// reverse  (inbuild operation)       ---> reverse(v.bigin(),v.end())

#include<iostream>
#include<vector>
// #include<iterator>
#include<algorithm>
using namespace std;


int main(){
    vector<int> v={1,2,3,4,5};
    int k=2;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int ele:v){
        cout<<ele;
    }
    return 0;
}