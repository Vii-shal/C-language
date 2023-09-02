// optimized way 


#include<iostream>
using namespace std;

int f(int p,int q){
    // base case
    if (q==0) return 1;
    if (q%2==0){
        // q is even
        int result = f(p,q/2);
        return result*result;
    }
    else{
        // q is odd
        int result = f(p,(q-1)/2);
        return  p*result*result;
    }
}

int main(){
    int res = f(2,4);
    cout<<res;
    return 0;
}

// time complexity :  O(log(q))
// space complexity :  O(log(q)) 