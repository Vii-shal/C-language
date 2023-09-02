#include<iostream>
using namespace std;

int square(int n){
    for(int i=1;i<=n;i++){
        int sqr=i*i;
        cout<<sqr<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    square(5);
    return 0;

}