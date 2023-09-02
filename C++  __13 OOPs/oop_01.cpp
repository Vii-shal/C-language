// #include<iostream>
// using namespace std;


// class fruit{
// public:
//     string name;
//     string color;
// };

// // class class_name{
// //     int data1;
// //     int data2;
// // };

// // class student{
// //     string name;
// //     int roll_no;
// // };

// int main(){

//     fruit apple;   // object
//     apple.name = "Apple";
//     apple.color = "red";
//     cout<<apple.name<<"   "<<apple.color<<endl;

//     fruit *mango = new fruit();    // object through pointer
//     mango->name = "Mango";
//     mango->color = "yellow";
//     cout<<mango->name<<"   "<<mango->color<<endl;


//     return 0;
// }


#include<iostream>
using namespace std;

class hello{
    public:
    int number;
    string name;
};


int main(){
    hello h1;
    h1.number = 1;
    h1.name = "good";

    cout<<h1.number<<"  "<<h1.name;

    hello *h2 = new hello();
    h2->number = 2;
    h2->name = "morning";
    cout<<endl<<h2->number<<"  "<<h2->name;



}