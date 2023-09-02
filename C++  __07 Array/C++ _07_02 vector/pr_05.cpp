// check if given array is sorted or not 
// sorted ----> ascending order (1,2,3,4,5,6)


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    int count=0;

    int sort=v[0];

    for(int i=1;i<6;i++){
        if (sort<v[i]){
            sort=v[i];
            count++;
        }
        else{
            cout<<"not sorted"<<endl;
            break;
        }
    }
    // cout<<count<<endl;
    if (count==6-1){
        cout<<"sorted";
    }
    // return 0;
}

