/*
    Author      : KaiserSakhi
    Date        : 01-05-2021
    Environment : WSL KaliLinux

*/

//program to demonstrate the use of virual functions and polymorphism

#include<iostream>

class Base{
    int x = 10;
public:
    Base(){}
    virtual int getX(){
        return this->x;
    }
};

class Derived : public Base{
    int y = 20;
public:
    Derived():Base(){      
    }
    int getX(){
        return this->y;
    }
};

int main(){
    Base *p = new Derived;
    std::cout<<p->getX()<<"\n";
    return 0;
}