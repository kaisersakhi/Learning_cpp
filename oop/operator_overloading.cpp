/*
    Author : KaiserSakhi
    Date : 27-03-2021
    Environment : WSL KaliLinux

*/

// program to demonstrate operator overloading

#include<iostream>

class Complex{
public:
    int real;
    int img;

    Complex(){
        real = 0;
        img = 0;
    }
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }


    Complex add(Complex c){
        Complex temp;
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }

    Complex operator+(Complex c){
        Complex temp;
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }

}; 

int main(){
    Complex c1(2,5), c2(3,4), c3;

    c3 = c1.add(c2);
    std::cout<<c3.real<<" + "<<c3.img<<"i\n";
    c3 = c1+c2;
    std::cout<<c3.real<<" + "<<c3.img<<"i\n";
    
    return 0;
}