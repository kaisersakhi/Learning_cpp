/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

// program to demonstrate the use of destructor 

#include <iostream>

class Number{
private:
    int *n;
public:
    Number(int x){
        this->n = new int;
        *this->n = x;
    }
    int getNumber(){
        return *this->n;
    }
    ~Number(){
        // this method will be called when the object of this type will be out of scope
        delete n;
    }
};


int main(){
    Number number(100);
    std::cout<<number.getNumber()<<"\n";
    return 0;
}