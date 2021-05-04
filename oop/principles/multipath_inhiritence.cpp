/*
 * Author : KaiserSakhi
 * Date : 30-03-21
 * Environment : WSL KaliLinux , Vim
 */

// program to demonstrate the concept of multipath inhiritence
// mulripath is hybrid type of inhiritence 

#include<iostream>

class A{
    int a = 10;
public:
    int getA(){
        return a;
    }

};

// for B, A is a virual base class 
class B : virtual public A{
    int b = 20;
public:
    int getB(){
        return b;
    }
};

//for C, A is  a virtual class 
class C : virtual public A{
    int c = 30;
public:
    int getC(){
        return c;
    }
};


// as B and C are both inhiriting from the single virtual base class 
// D will get features of A {single copy , by using virual }, B and C
class D: public B, public C{
    int d = 40;
public:
    int getD(){
        return d;
    }
};


int main(){
    D d;
    std::cout<<d.getA()<<" "<<d.getB()<<" "<<d.getC()<<" "<<d.getD()<<" \n";
    return  0;
}