// constructor and destructor 

#include<iostream>
using namespace std;

class rectangle{
public:
    int l;
    int b;
    rectangle(){         // default constructor --> no argument passed
        l=0;
        b=0;
    }

    rectangle(int x,int y){   // parameterised constructor --> argument pass
        l=x;
        b=y;
    }

    rectangle(rectangle &r){   // copy constructor -->  initialise an obj by another existing object
        l=r.l;
        b=r.b;
    }

    ~rectangle(){              // destructor
        cout<<"destructor is called"<<endl;
    }
};

int main(){

    rectangle r1;
    cout<<r1.l<<"  "<<r1.b<<endl;


    rectangle *r4 = new rectangle();
    cout<<r4->l<<"  "<<r4->b<<endl;
    delete r4;                      // "delete" used with pointer


    rectangle r2(3,5);
    cout<<r2.l<<"  "<<r2.b<<endl;

    rectangle r3 = r2;
    cout<<r3.l<<"  "<<r3.b<<endl;


    return 0;
}
    
    // when main function ends then value in r1,r2,r3 get deleted ,so destructor is called