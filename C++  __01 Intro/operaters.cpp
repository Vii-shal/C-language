#include<iostream>
using namespace std;

int main(){
 
    int num1 = 6;
    int num2 = 3;

    // arithmetic operator

    cout<<num1 + num2<<endl;  //9
    cout<<num1 - num2<<endl;  //3
    cout<<num1 * num2<<endl;  //18 
    cout<<num1 / num2<<endl;  //2
    cout<<num1 % num2<<endl;  //0
    cout<<num1++<<endl;       //7
    cout<<(num1--)<<endl;       //5

    // relational operator

    cout<<(num1 == num2)<<endl;  //false
    cout<<(num1 != num2)<<endl;  //true
    cout<<(num1 <= num2)<<endl;  //false
    cout<<(num1 >= num2)<<endl;  //true

    // logical operater

    bool exp1 = true;
    bool exp2 = false;
    cout<<(exp1&&exp2)<<endl;  //false
    cout<<(exp1||exp2)<<endl;  //true
    cout<<(!exp1)<<endl;        //false

    // assignment operator

    num1+=3;
    cout<<num1<<endl;  //6+3 = 9
    num2-=2;           
    cout<<num2<<endl;  //3-2 = 1

    // bitwise operator

    int num3 = 5;            //0101
    cout<<(num3<<1)<<endl;   //10
    cout<<(num3>>1)<<endl;   //2
    int num4 = 8;            //1000
    cout<<(num3&num4)<<endl; //0
    cout<<(num3|num4)<<endl; //1101 = 13

    // misc operator

    int a=4;
    cout<<sizeof(a)<<endl;  //4

    char c='y';
    cout<<sizeof(c)<<endl; //1

    int b;
    a==c?b=7:b=5;          //5
    cout<<"b is "<<b<<endl;

    bool flag;
    a==c?flag=true:flag=false;
    cout<<"flag is "<<flag<<endl;  //0

    cout<<(&a)<<endl;

    float g=4.53;
    cout<<int(g)<<endl;


    // pre and post increment operater

    int x=4;
    cout<<(x++)<<endl;
    cout<<(++x)<<endl;

    int y=50;
    y++;
    cout<<(y)<<endl;














    














































}