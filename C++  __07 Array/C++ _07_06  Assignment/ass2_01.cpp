// Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order.
// Merge the two arrays into a single sorted array of size m+n.
// eg.  arr1[] = { 1 , 6 , 7 , 10 };
//      arr2[] = { 0 , 1 , 3 , 8 , 11, 12, 15, 18 }
//      ans[] = { 0 , 1 , 1 , 3 , 6 , 7 , 8 , 10, 11, 12, 15, 18 }


#include<iostream>
#include<vector>
using namespace std;

void singleSorted(vector<int> &arr1,vector<int> &arr2){
    vector <int> arr3(arr1.size()+arr2.size());
    int i=0;
    int j=0;
    int k=0;
    while (i<arr1.size() and j<arr2.size()){
        if (arr1[i] < arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while (i<arr1.size()){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while (j<arr2.size()){
        arr3[k]=arr2[j];
        k++;
        j++;
    }

    for (int k=0;k<arr1.size()+arr2.size();k++){
        cout<<arr3[k]<<"  ";
    }
    

}

int main(){
    cout<<"Enter m"<<endl;
    int m;cin>>m;
    vector <int> arr1(m);
    for (int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter n"<<endl;
    int n;cin>>n;
    vector <int> arr2(n);
    for (int i=0;i<n;i++){
        cin>>arr2[i];
    }

    singleSorted(arr1,arr2);
    return 0;
}







// #include<iostream>
// using namespace std;

// int main(){
//     int a[]={1,6,7,10};
//     int b[]={0,1,3,8,11,12,15,18};
//     int m=4;
//     int n=8;
//     int result[m+n];
//     int i=0;
//     int j=0;
//     int k=0;

//     while(i<m and j<n){
//         if (a[i]<b[j]){
//             result[k]=a[i];
//             k++;
//             i++;
//         }
//         else {
//             result[k]=b[j];
//             k++;
//             j++;
//         }
//     }
//     while (i<m){
//         result[k]=a[i];
//         k++;
//         i++;
//     }
//     while (j<n){
//         result[k]=b[j];
//         k++;
//         j++;
//     }

//     for (int k=0;k<m+n;k++){
//         cout<<result[k];
//     }

//     return 0;
// }