/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

//program to demonstrate, exception handling with function


#include <iostream>

double divide(int, int) throw(int);

int main(){
    int dividend = 27;
    int divisor = 0;
    double qoutient = 0;

    try{
        qoutient = divide(dividend , divisor);
    }
    catch(int &e){
        std::cerr << e << '\n';
    }
    return 0;
}

double divide(int divident, int divisor) throw(int){
    if (divisor == 0) throw 1;

    return divident / divisor;
}
