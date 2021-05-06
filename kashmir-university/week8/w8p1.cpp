/*
    Date : 07-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

// PROGRAM : Write a program in C++ to define class complex which having two data members vizreal and
//imaginarypart ?

#include<iostream>

class Complex{
private:
    int real;
    int img;

public:
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void disp(){
        std::cout<<real<<" "<<img<<"i\n";
    }

};
int main(){

    Complex c(2,-5);
    c.disp(); 
    return 0;
}