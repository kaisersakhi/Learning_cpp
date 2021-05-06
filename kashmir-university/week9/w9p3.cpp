/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

// program to demonstrate the use of inline , friend funcions and this keyword 


#include<iostream>

// this function wiill demonstrate the use of inline function
// this functino will swap the arguments given 
inline void swap(int &, int &);

// this class will demonstrate 'this' keyword and friend function
class Number{
private:
    int a;
    int b;
public:
    void setData(int a , int b){
        // 'this' will refrence to this class, its members  
        this->a = a;
        this->b = b;
    }
    friend int add(Number);
};

int add(Number n){
    // this function access the private memebers of the class Number
    return n.a + n.b;
}


int main(){
    int a = 10;
    int b = 20;
    Number number;
    number.setData(a ,b);
    std::cout<<"Addition is : "<<add(number)<<"\n";
    std::cout<<"Before Swap : a = "<<a<<",b = "<<b<<"\n";
    swap(a,b);
    std::cout<<"After Swap : a = "<< a<< ", b = "<<b<<"\n";
    return 0;
}

inline void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}