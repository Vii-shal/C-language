// // // compile time polymorphism

// // function overloading

// /*

// #include<iostream>
// using namespace std;

// class sum{
//     public:
//     void add(int a,int b){
//         int sum = a+b;
//         cout<<sum<<endl;
//     }
//     void add(float a,float b){
//         float sum =  a+b;
//         cout<<sum<<endl;
//     }
//     void add(int a,int b,int c){
//         int sum = a+b+c;
//         cout<<sum<<endl;
//     }
// };

// int main(){
//     sum s1,s2,s3;
//     s1.add(1,2);
//     s2.add(float(1.1),float(2.1));
//     s1.add(1,2,3);


// }

// */


// // -------------------------------------------------------------------------------------------------------------


// // Operator Overloading

// #include<iostream>
// using namespace std;

// class complex{
//     public:
//     int real;
//     int img;
//     complex(int x,int y){
//         real = x;
//         img = y;
//     }

//     complex operator+ (complex &c2){
//         complex ans(0,0);
//         ans.real = real + c2.real;
//         ans.img = img + c2.img;
//         return ans;
//     }
// };

// int main(){
//     complex c1(1,2);
//     complex c2(1,3);

//     complex c3=c1+c2;
//     cout<<c3.real<<" i"<<c3.img<<endl;


// }



#include<iostream>
using namespace std;

class complex{
    public:
    int real;
    int img;
    complex(int x,int y){
        real=x;
        img=y;
    }

    complex operator* (complex &c){
        complex ans(0,0);
        ans.real = real*c.real - img*c.img;
        ans.img = real*c.img + img*c.real;
        return ans;
    }
};

int main(){
    complex x1(1,2);
    complex x2(1,3);

    complex x3=x1*x2;
    cout<<x3.real<<" i"<<x3.img<<endl;



}