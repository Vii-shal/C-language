#include<iostream>
using namespace std;
int area(int a){
    int area = 3.14*a*a;
    cout<<"area is :"<<area<<endl;
}
int circum(int a){
    int circumference = 2*3.14*a;
    cout<<"circumference is :"<<circumference<<endl;
}

int main(){
    int a;
    cin>>a;
    area(a);
    circum(a);
    return 0;
}