/*
    Author : KaiserSakhi
    Date : 01-05-2021
    Environment : WSL KaliLinux

*/

//program to demonstrate, custom exception


#include <iostream>

double divide(int, int);

class MathError{
    int errorCode; 
public:
    MathError(int errorCode){
        
        this->errorCode = errorCode;
    }
    void printTrace(){
        if (errorCode == 1023){
            std::cout<<"Math Error : Divivde By Zero.\n";
        }
    }
};
int main(){
    int dividend = 27;
    int divisor = 0;
    double qoutient = 0;

    try{
        qoutient = divide(dividend , divisor);
    }
    catch(MathError &e){
        e.printTrace();
    }
    return 0;
}

double divide(int divident, int divisor){
    if (divisor == 0) throw MathError(1023);
    return divident / divisor;
}
