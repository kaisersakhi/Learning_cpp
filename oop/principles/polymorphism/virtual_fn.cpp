/*
 * Author : KaiserSakhi
 * Date : 30-03-21
 * Environment : WSL KaliLinux , Vim
 */

#include<iostream>
class A{
    int a;
public:
    A(int k){
        this->a = k*2;
    }
    // if derived class points with the base pointer then this function will overridden
    // and the getInt() member function of derived class will be called
    virtual int getInt(){
        return a;
    }
};

class B: public A{
    float c ;
    int b ;
public:
    //B constructor and also calling the constructor of base class
    B(int b):A(2){
    this->b = b;
    }
    // this fuction overrides the getInt() function in the base class
    //  
    int getInt() override {
        return A::getInt()+b;
    }
    void setInt(int b){
        this->b = b;
    }
};

int main(){
    // base pointer points to the derived class
    A *aPtr = new B(22);
    B b(23);
    std::cout<<"A = new B "<<aPtr->getInt()<<"\n";
    std::cout<<"B = new B "<<b.getInt()<<"\n";
    return 0;
}