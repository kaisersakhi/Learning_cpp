/*
    Author : KaiserSakhi
    Date : 09-01-2021
    Environment : WSL KaliLinux

*/


// This snippet will desmonstrate the use of genaric functions
// genarics are used to perform same logic on diffrent data types , this way we eliminate redundancy.
#include<iostream>

template<class T>
T maximum(T a, T b){
    return (a+b);
}

int main(){
    std::cout<<(maximum(34,1))<<"\n"; // this is int
    std::cout<<(maximum(34.5f,1.4f))<<"\n"; // this is float 
    std::cout<<(maximum(34.5,1.4))<<"\n"; // and this is double 
    return 0;
}