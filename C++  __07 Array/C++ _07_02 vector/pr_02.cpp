
// // Find last occurence of an element x in a given array (vector)

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v(6);
//     for(int i=0;i<6;i++){
//         cin>>v[i];
//     }

//     cout<<"enter x";
//     int x;
//     cin>>x;

//     int large=-1;  // if element is not present in a vector

//     for (int i=0;i<v.size();i++){             // check  from beginn
//         if (v[i]==x){
//             large=i;
//         }
//     }
//     cout<<large<<endl;
//     return 0;

// }







// Find last occurence of an element x in a given array (vector)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    cout<<"enter x";
    int x;
    cin>>x;

    int large=-1;  // if element is not present in a vector

    for (int i=v.size()-1;i>=0;i--){           // check from last
        if (v[i]==x){
            large=i;
            break;
        }
    }
    cout<<large<<endl;
    return 0;

}