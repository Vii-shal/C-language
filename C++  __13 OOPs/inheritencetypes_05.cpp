// // // single inheritence

// #include<iostream>
// using namespace std;

// class parent{
//     public:
//     parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class child:public parent{
//     public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };

// int main(){
//     child c;
//     return 0;
// }

// // // -------------------------------------------------------------------------------------

// // // multi level inheritence

// #include<iostream>
// using namespace std;

// class parent{
//     public:
//     parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class child:public parent{
//     public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };

// class grandchild:public child{
//     public:
//     grandchild(){
//         cout<<"grandchild class"<<endl;
//     }
// };

// int main(){
//     grandchild g;
//     return 0;
// }

// // // --------------------------------------------------------------------------------------------------

// // // Multiple inheritence

// #include<iostream>
// using namespace std;

// class parent1{
//     public:
//     parent1(){
//         cout<<"parent1 class"<<endl;
//     }
// }; 

// class parent2{
//     public:
//     parent2(){
//         cout<<"parent2 class"<<endl;
//     }
// };

// class child:public parent1 , public parent2{
//     public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };

// int main(){
//     child c;
//     return 0;
// }

// // // ----------------------------------------------------------------------------------------

// // // Hierarchical inheritence

#include<iostream>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"parent class"<<endl;
    }
};

class child1:public parent{
    public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};

class child2:public parent{
    public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};

int main(){
    child1 c1;
    child2 c2;
    return 0;
}

// // // -------------------------------------------------------------------------------------------

// // // Hybrid inheritence
