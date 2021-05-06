/*
    Date : 10-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

//Write a program in C++ which creates objects of Student class using default, overloaded and copy
// constructors. 

#include<iostream>

class Student{
private:
    std::string name;
    int age;
public:
    //defualt constructor
    Student(){
        name = "";
        age = 0;
    }
    //overloaded constructor
    Student(std::string n, int a){
        name = n;
        age = a;
    }
    //copy constructor;
    Student(Student &student){
        name = student.name;
        age = student.age;
    }
};


int main(){
    Student s1;
    Student s2("Kaiser Sakhi",82);
    Student s3(s2);
    return 0;
}
