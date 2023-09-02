#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5);

    for(int &ele : v){
        cin>>ele;
    }

    for(int ele : v){
        cout<<ele<<"  ";
    }
 
}
