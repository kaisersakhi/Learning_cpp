/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

//program to demonstrate the unary operator overloading 

#include<iostream>

class Number{
private:
    int n;
public:
    Number(int x){
        n = x;
    }
    void put(int x){n = x;}
    int get(){return n;}

    void operator- (){
        n = -n;
    }

};

int main(){
    Number number(10);
    -number;
    std::cout<<number.get()<<std::endl;
    return 0;
}