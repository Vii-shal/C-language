// given an array of integers 'a' , move all the even integers 
// at the beginning of the array followed by all the odd integers .
// the relative order of odd or even integers does not matter . 
// return any array that satisfies the condition .


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort_even_odd(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr < right_ptr){
        if (v[left_ptr]%2!=0 && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2!=0){
            right_ptr--;
        }
    }
}


int main(){
    int a;
    cin>>a;
    vector<int> v(a);
    for (int i=0;i<a;i++){
        cin>>v[i];
    }

    sort_even_odd(v);
    for(int i=0;i<a;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
