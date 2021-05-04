/*
 * Author : KaiserSakhi
 * Date : 30-03-21
 * Environment : WSL KaliLinux , Vim
 */

// program to demonstrate function overloading overridding
#include<iostream>
class A{
    int a = 10;
public:
    int getInt(){
        return a;
    }
};

class B: public A{
    int b;
public:
    int getInt(){
        return A::getInt()+b;
    }
    void setInt(int b){
        this->b = b;
    }
};

int main(){
    B b;
    b.setInt(35);
    std::cout<<b.getInt()<<"\n";
    return 0;
}