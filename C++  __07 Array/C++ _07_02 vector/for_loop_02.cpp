#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);

    }

    // vector<int> v(5);

    // for(int i=0;i<5;i++){
    //     cin>>v[i];
    // }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
    return 0;
}