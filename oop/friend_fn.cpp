/*
    Author : KaiserSakhi
    Date : 27-03-2021
    Environment : WSL KaliLinux

*/

// prgram to demonstrate friend fuction, also operator overloading with friend function

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
    friend Complex operator+(Complex c1, Complex c2);
}; 

//a friend fuction has access to  private and protected to which it is friend to 
Complex operator+(Complex c1, Complex c2){
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
}

int main(){
    Complex c1(2,5), c2(3,4), c3;
    c3 = c1+c2;
    std::cout<<c3.real<<" + "<<c3.img<<"i\n";
    
    return 0;
}