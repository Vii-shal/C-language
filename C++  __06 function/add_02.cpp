// addition


#include<iostream>
using namespace std;

int add(int num1 , int num2){
    int sum = num1+num2;
    return sum;
}
int add(int num1 , int num2 , int num3){
    int sum = num1+num2+num3;
    return sum;
}
// float add2(float num1 , float num2){
float add(float num1 , float num2){
    float sum = num1+num2;
    return sum;
}

int main(){
    // int l = add(5,9);
    // int m = add(2,8,7);
    // float n = add2(5.2,6.2);
    // cout<<l<<endl<<m<<endl<<n<<endl;

    cout<<add(5,9)<<endl;
    cout<<add(1,2,3)<<endl;
    float c=3.5;
    float d=3.1;

    cout<<add(c,d)<<endl;



    return 0;

}