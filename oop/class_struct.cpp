/*
 * Author : KaiserSakhi
 * Date : 24-03-21
 * Environment : WSL KaliLinux , VsCode
 */


// program to desmonstrate the difference between class and struct 

// in c++ they are the same with slight difference, acces specifer

#include<iostream>

struct sComplex{
    //by defualt the acces is public
    void setReal(int real){
        this->real = real;
    }
    void setImg(int img){
        this->img = img;
    }

    void disp(){
        std::cout<<this->real<<((this->img < 0)? "" : "+")<<this->img<<"i\n";
    }

    sComplex(){
        std::cout<<"Constructor Called!\n";
        this->real = 0;
        this->img = 0;
    }

private:
    int real;
    int img;

};
class Complex{
    //by defualt the acces is private
public:
    void setReal(int real){
        this->real = real;
    }
    void setImg(int img){
        this->img = img;
    }

    void disp(){
        std::cout<<this->real<<((this->img < 0)? "" : "+")<<this->img<<"i\n";
    }

    Complex(){
        std::cout<<"Constructor Called!\n";
        this->real = 0;
        this->img = 0;
    }

private:
    int real;
    int img;

};


int main(){
    sComplex c;
    Complex cc;
    cc.setReal(-12);
    cc.setImg(6);
    cc.disp();

    c.setReal(10);
    c.setImg(-5);
    c.disp();
    return 0 ;
}