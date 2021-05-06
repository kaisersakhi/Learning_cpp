/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

// demonstrate the use of diffrent access specifiers 

// in cpp there are three access specifires 
// #1 public
// #2 private
// #3 protected 
#include <iostream>

class Data{

private:
    // this member is private which can be only accessed inside this class 
    unsigned int a = 0;
public:
    // this is public scope
    void putData(unsigned int x){
        this->a = x;
    }
    int getData(){
        return a;
    }
    int divide(unsigned int divisor){
        if (divisor == 0){
            std::cout<<"Divisor should not be zero. \n";
            return -1;
        }
        return a / divisor;
    }
};


int main(){

    Data data;
    int qoutient;

    data.putData(90);
    qoutient = data.divide(0);
    qoutient = data.divide(30);
    std::cout<<data.getData()<<" / " <<"30 = "<<qoutient<<"\n";
    return 0;
}