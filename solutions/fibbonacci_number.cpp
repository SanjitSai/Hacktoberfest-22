#include<iostream>
using namespace std;

unsigned long long fib[100];

void fib_compute(){
    fib[0]=fib[1]=1;
    for(int i=2; i<100; i++){
        fib[i] = fib[i-2] + fib[i-1];
    }
}

int main(){
    fib_compute();
    cout<<"The first 100 fibonacci numbers are: \n";
    for(int i=0; i<100; i++){
        cout<<fib[i]<<" ";
    }
    cout<<"\n";
}
