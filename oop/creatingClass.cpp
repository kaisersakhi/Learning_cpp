/*
    Author : KaiserSakhi
    Date : 09-01-2021
    Environment : WSL KaliLinux

*/
// #include<string>
#include<iostream>

class Student{
    //if we dont specifie the scope then private is defualt;
    public:
    std::string name;
};

int main(){
    
    //these will be created in the stack
    Student student;
    Student student2;
    
    //this will be created inside heap
    Student *s1 = new Student;
    
    //to derefance the the property of the 

    student.name = "Kaiser Sakhi";
    student2.name = "Muhammad Ali";
    std::cout<<student.name<<" and "<<student2.name<<"\n";

    return 0;
    
}