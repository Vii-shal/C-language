// write 1 to 50 skippimg multiple of 3



// #include<iostream>
// using namespace std;

// int main(){
//     int i=1;
//     while(i<50){
//         if(i%3==0){
//             i++;
//             continue;
//         }
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    for (int i=0;i<50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}