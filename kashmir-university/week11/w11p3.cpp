/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

// write a program in c++ to demonstrate the concep of function overiding

#include<iostream>


class A{
private:
    int x;
public:
    A(int x = 0){
        this->x = x;
    }
    void print(){
        std::cout<<x<<"\n";
    }
};

class B : public A{
private:
    int y;
public:
    B(int y){
        this->y = y;
    }
    // this print fucntion overrides the print() function in the base class 
    void print(){
        std::cout<<y<<"\n";
    }
};

int main(){
    B b(10);
    //this will print 10 instead of printing 0
    b.print();
    return 0;
}

