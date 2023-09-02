// print first number which is multiple of 5 and 7


// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     int mult;
//     while(true){
//         mult=5*i;
//         i++;
//         if(mult%7==0){
//             cout<<mult<<endl;
//             break;
//         }
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int i=5;
    while(true){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;
    }
    for(;;i=i+5){
        if (i%7==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}