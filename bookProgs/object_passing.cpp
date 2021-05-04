/*
    Author : KaiserSakhi
    Date : 29-03-2021
    Environment : WSL KaliLinux

*/

#include<iostream>

class myclass{
    int i;
public:
    myclass(int n);
    ~myclass();
    void set_i(int n){
        i = n;
    }

    int get_i(){
        return i;
    }

};

myclass::myclass(int n){
    i = n;
    std::cout<<"Constructing "<<i<<"\n";
}

myclass::~myclass(){
    std::cout<<"Destroying "<<i<<"\n";
}

void f(myclass ob);

int main(){
    myclass o(1); // constructing 1
    
    //passing o to f
    //here constructor is called only once 
    f(o); // this is local i : 2

    std::cout<<"This is i in main: ";
    std::cout<<o.get_i()<<"\n";

    return 0;
}
void f(myclass ob){ // new object is created and copy cosntructor is called 
    // when passing an object to a fuction, the copy is made
    // with the help of copy constructor 
    
    ob.set_i(2);
    std::cout<<"This is local i :"<< ob.get_i()<<"\n";
    // here the copy object goes out of scope
    // so the destructor of "ob" is clalled
}


