#include<iostream>
#include<chrono>                                 //
using namespace std;

auto start = chrono::steady_clock::now();        //
int sum_in_range(int x,int y){
    int result =0;
    for (int i=x;i<=y;i++){
        result += i;
    }
    return result;
}

int main(){
    cout<<sum_in_range(2,6)<<endl;

    auto end = chrono::steady_clock::now();                                                //
    auto diff = end - start;                                                               //
    cout<<chrono::duration<double,milli>(diff).count()<<"ms"<<endl;                        //
    return 0;
}