/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

// program to demonstrate the use of function overloading

#include<iostream>

class Addtion{
public:
    int add(int a, int b){
        return a+b;
    }
    float add(float a, float b){
        return a+b;
    }
    double add(double a, double b){
        return a+b;
    }
};

int main(){
    int a = 10 , b = 20;
    float fa = 20.09f, fb = 30.30f;
    double da = 55.55, db = 66.66;
    Addtion addtion;

    std::cout<<"Addition of "<<a<<"+"<<b<<" = "<<addtion.add(a,b)<<"\n";
    std::cout<<"Addition of "<<fa<<"+"<<fb<<" = "<<addtion.add(fa,fb)<<"\n";
    std::cout<<"Addition of "<<da<<"+"<<db<<" = "<<addtion.add(da,db)<<"\n";
    return 0;
}