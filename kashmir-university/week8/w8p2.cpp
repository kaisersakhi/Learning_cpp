/*
    Date : 07-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

//Write a program in C++ to define class Person which having multiple data members for storing the
//different details of the person e.g. name,age, address, height etc.

#include<iostream>


class Person{
private:
    std::string name;
    int age;
    std::string address;
    float height;
public:
    Person(std::string n, int a, std::string adr, float h){
        name = n;
        age = a;
        address = adr;
        height = h;
    }
    void disp(){
        std::cout<<name<<" "<<age<<" "<<address<<" "<<height<<"\n";
    }
};

int main(){
    Person kaiser("Kaiser Sakhi", 31, "Kashmir", 7.2);
    kaiser.disp();
    return 0;
}