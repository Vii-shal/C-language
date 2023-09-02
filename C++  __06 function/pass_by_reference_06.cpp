
// pass by reference 


// #include<iostream>
// using namespace std;

// int main(){
//     int p=5;
//     int &q=p;

//     q++;
//     cout<<p<<endl;

//     // p and q have same memory location
//     cout<<&p<<endl;
//     cout<<&q<<endl;
// }

#include<iostream>
using namespace std;

void change(int &x , int &y){
    x=100;
    y=99;
}

int main(){
    int a=5;
    int b=50;

    change(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;

}