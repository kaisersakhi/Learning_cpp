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
    bool operator==(Number &number){
        if (*this->num == number.get()){
            return true;
        }
        return false; 
    }
    bool operator!=(Number &number){
        if (*this->num != number.get()){
            return true;
        }
        return false; 
    }
    ~Number(){
        delete num;
    }
};

int main(){
    Number n1(10);
    Number n2(10);

    if (n1 == n2){
        std::cout<<"n1 and n2 are same!\n";
    }

    n2.put(0);
    
    if (n1 != n2){
        std::cout<<"n1 is not equal to n2!\n";
    }
    return 0;
}