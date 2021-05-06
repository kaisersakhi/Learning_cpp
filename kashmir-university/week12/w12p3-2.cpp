/*
    Author      : KaiserSakhi
    Date        : 01-05-2021
    Environment : WSL KaliLinux

*/

//write a c++ progrram to demonstrate the use of pure virtual functions and virual destructors 
#include<iostream>

class Product{
public:
    virtual void feature101() = 0;
};

class LaserGun : public Product{
public:
    void feature101(){
       std::cout<<"Feature 101 Has Been Implemented !\n"; 
    }
};

int main(){
    Product *product = new LaserGun;
    product->feature101();
    delete product;
    return 0;
}