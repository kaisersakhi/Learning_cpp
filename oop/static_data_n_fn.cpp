/*
    Author : KaiserSakhi
    Date : 27-03-2021
    Environment : WSL KaliLinux

*/

//program to demonstrate, static data member and static member function


#include<iostream>


class K{
public:
    static int a;

    K(){
        this->a++;
    }
};

//this is also in global scope
int K::a = 0; //define a, has to be defined outside, by defining we're allocting space for a

int main(){
    K k1,k2,k3,k4;

    std::cout<<"There are "<<K::a<<" of instances of K\n";

    return 0;
}