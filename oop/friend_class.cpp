/*
    Author : KaiserSakhi
    Date : 27-03-2021
    Environment : WSL KaliLinux

*/

//program to demonstrate friend class 
#include<iostream>
class TwoValues{
    int a;
    int b;
public:
    TwoValues(int a, int b){
        this->a = a;
        this->b = b;
    }

    friend class Greatest;

};

class Greatest{
public:
    int greater(TwoValues t){
        // nomally we shouldn't be able to do this, but as this is a friedn of TwoValues 
        //we can access the private values of base class
        // this is not inheritence 
        return (t.a > t.b)? t.a : t.b ;
    }

};

int main(){
    TwoValues t(4,5);
    Greatest g;
    std::cout<<g.greater(t);
    return 0;
}