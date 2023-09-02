// run time polymorphism 

// virtual function

#include<iostream>
using namespace std;

class parent{
    public:
    virtual void print(){                                       //
        cout<<"parent print"<<endl;
    }
    void show(){
        cout<<"parent show"<<endl;
    }
};
class child: public parent{
    public:
    void print(){
        cout<<"child print"<<endl;
    }
    void show(){
        cout<<"child show"<<endl;
    }
};

int main(){
    parent *p;
    child c;
    p=&c;                  // runtime pe humne iss pointer ko child object assign kar diya + virtual function

    p->print();
    p->show();
}