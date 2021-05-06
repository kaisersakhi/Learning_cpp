/*
    Author      : KaiserSakhi
    Date        : 01-05-2021
    Environment : WSL KaliLinux

*/

//write a c++ progrram to demonstrate the use of pure virtual functions and virual destructors 
#include<iostream>

class AnyNumber{
public:
    AnyNumber(){
        std::cout<<"AnyNumber Constructed!\n";
    }
    // whenever the pointer of this class is pointing to deriveid class
    // the destructor of derieved class will override this, and after that this will be called
    virtual ~AnyNumber(){
        std::cout<<"AnyNumber Destructed!\n";
    }
};

class Number : public AnyNumber{
    int *number = nullptr;
public:
    Number(){
        number = new int(10);
        std::cout<<"Number Constructed!\n";
    }
    ~Number(){
        delete number; 
        std::cout<<"AnyNumber Destructed!\n";
    }
};

int main(){
    AnyNumber *num = new Number;
    delete num;
    return 0;
}