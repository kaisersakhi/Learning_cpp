/*
    Author      : KaiserSakhi
    Date        : 01-05-2021
    Environment : WSL KaliLinux

*/

// crite a c++ program to swap data using funciton templetes

#include<iostream>

template<class Type>
void swap(Type a, Type b){
    Type temp = a;
    a = b;
    b = a;
    return;
}

int main(){
    std::string a = "Kaiser";
    std::string b = "Sakhi";
    swap(a,b);
    std::cout<<a<<" "<<b<<"\n";
    return 0;
}