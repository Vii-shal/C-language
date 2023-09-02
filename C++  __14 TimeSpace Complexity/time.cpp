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

int sum_in_range_optimised(int x,int y){
    int n=(y-x+1);
    int a=x;
    int result = (n*(2*a + (n-1)*1))/2;
    return result;
}

int main(){
    cout<<sum_in_range(2,6)<<endl;
    cout<<sum_in_range_optimised(2,6)<<endl;

    auto end = chrono::steady_clock::now();                                                //
    auto diff = end - start;                                                               //
    cout<<chrono::duration<double,milli>(diff).count()<<"ms"<<endl;                        //
    return 0;
}