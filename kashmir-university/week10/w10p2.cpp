/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

//program to overload the assighment operator 

#include<iostream>

class Number{
private:
    int *num = nullptr;
public:
    Number(int num = 0){
        this->num = new int(num);
    }
    void put(int num){
        *this->num = num;
    }
    int get(){
        return *this->num;
    }
    Number& operator=(Number &number){
        *num = number.get();
        return number; 
    }
    ~Number(){
        delete num;
    }
};

int main(){
    Number n1(10);
    Number n2(20);
    n1 = n2;
    n2.put(22);
    std::cout<<"n1 = "<<n1.get()<<"\n";
    std::cout<<"n2 = "<<n2.get()<<"\n";
    return 0;
}