#include<iostream>
using namespace std;

// dont swap 

// void swap(int x,int y){    // x and y are copies
//     int temp = x;
//     x=y;
//     y=temp;
// } 

// int main(){
//     int x = 10;
//     int y = 20;
//     cout<<x<<"  "<<y<<endl;
//     swap(x,y);
//     cout<<x<<"  "<<y<<endl;




void swap(int *x,int *y){   
    int temp = *x;
    *x = *y;
    *y = temp;
} 

int main(){
    int x = 10;
    int y = 20;

    int *p1 = &x;
    int *p2 = &y;

    cout<<x<<"  "<<y<<endl;
    // swap(p1,p2);
    // cout<<x<<"  "<<y<<endl;
    swap(x,y);
    cout<<x<<"  "<<y<<endl;



    return 0;
}