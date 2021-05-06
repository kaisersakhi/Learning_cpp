/*
    Author      : KaiserSakhi
    Date        : 01-05-2021
    Environment : WSL KaliLinux

*/
// write a c++ program to create a simple claculator  which can add, subtract , multiply and divide two numbers 
//using templete class
#include<iostream>

template<class K>
class Number{
public:
    K add(K a, K b){
        return a + b;
    }
    K subtract(K a, K b){
        return a - b;
    }
    K multiply(K a, K b){
        return a * b;
    }
    K divide(K a, K b){
        return a / b;
    }
};

int main(){
    Number<double> number;
    double a = 10.40, b = 5.20;

    std::cout<<"Addition is         :"<<number.add(a ,b)<<"\n";
    std::cout<<"Subtraction is      :"<<number.subtract(a, b)<<"\n";
    std::cout<<"Multiplucation is   :"<<number.multiply(a , b)<<"\n";
    std::cout<<"Division is         :"<<number.divide(a, b)<<"\n";

    return 0;
}