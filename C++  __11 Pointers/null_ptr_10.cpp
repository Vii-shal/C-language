#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    int *p1 = NULL;
    int *p2 = 0;
    int *p3 = '\0';
    cout<<ptr<<"  "<<p1<<"  "<<p2<<"  "<<p3;   // we cant derefrence a null pointer
}