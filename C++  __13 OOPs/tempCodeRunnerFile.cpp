#include<iostream>
using namespace std;

class parent1{
    public:
    parent1(){
        cout<<"parent1 class"<<endl;
    }
}; 

class parent2{
    public:
    parent2(){
        cout<<"parent2 class"<<endl;
    }
};

class child:public parent1 , public parent2{
    public:
    child(){
        cout<<"child class"<<endl;
    }
};

int main(){
    child c;
    return 0;
}
