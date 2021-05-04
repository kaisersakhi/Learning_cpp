/*
    Author : KaiserSakhi
    Date : 26-03-2021
    Environment : WSL KaliLinux

*/

//Program to desmonstrate the  implementation of inline function

#include<iostream>

class Test{
    public:
    void guessWhat(){
        std::cout<<"this is an inlinee member function"<<std::endl;
    }
    void uCantGuess();

    inline void howBoutThis();
};

void Test::uCantGuess(){
    std::cout<<"This is not an inline member function!"<<std::endl;
}

void Test::howBoutThis(){
    std::cout<<"This is an inline memberfuction!"<<std::endl;
}

int main(){

    Test t;
    t.guessWhat();
    t.uCantGuess();
    t.howBoutThis();
    return 0;
}