// Given an integer array "a" sorted in non-decreasing order , 
// return an array of the squares of each number sorted in non decreasing order.
// {-5,-4,2,3,6}     integer array
// { 5, 4,2,3,6}     absolute value or number
// { 6, 5,4,3,2}     arrange or sort
// {36,25,16,9,4}    square 
// {4,9,16,25,36}     reverse (ans)


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sort_square(vector<int> &v){
    
    vector<int> ans;

    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr <= right_ptr){
        if (abs(v[left_ptr]) < abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else {
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }

    for (int i=0;i<v.size();i++){
        cout<<ans[i]<<"  ";
    }
    cout<<endl;

    reverse(ans.begin() , ans.end());
    cout<<" non-decreasing order"<<endl;
    for (int i=0;i<v.size();i++){
        cout<<ans[i]<<"  ";
    }

}


int main(){
    int n;cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }

    sort_square(v);
    return 0;
}