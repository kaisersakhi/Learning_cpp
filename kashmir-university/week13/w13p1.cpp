/*
    Author : KaiserSakhi
    Date : 01-05-2021
    Environment : WSL KaliLinux

*/

//program to demonstrate, exception handling with function


#include <iostream>

double divide(int, int);

int main(){
    int dividend = 27;
    int divisor = 0;
    double qoutient = 0;

    try{
        qoutient = divide(dividend , divisor);
    }
    catch(int &e){
        std::cerr << "Math Error : Divivde By Zero." <<e << '\n';
    }
    return 0;
}

double divide(int divident, int divisor){
    if (divisor == 0) throw 1;
    return divident / divisor;
}
