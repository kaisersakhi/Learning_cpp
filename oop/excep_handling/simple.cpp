/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

//program to demonstrate, exception handling 

#include <iostream>

int main(){
    int dividend = 27;
    int divisor = 0;
    int qoutient = 0;

    try{
        if (divisor == 0) throw std::string("Error : divisor is zero");
        qoutient = dividend / divisor;
    }
    catch(std::string &e){
        std::cerr << e << '\n';
    }

    return 0;
    
}