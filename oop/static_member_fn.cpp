/*
    Author : KaiserSakhi
    Date : 29-03-2021
    Environment : WSL KaliLinux

*/


#include<iostream>


class K{
public:
    static int a;

    static int getA(){
        //static fucntion can't use non-static members;
        return a; 
    }
};

int K::a = 0;



//demonstrating the use of static field 

class Student{
    int rollNo;
public:
    int static addmissionNo;
    Student(){
        ++addmissionNo;
        rollNo = addmissionNo;
    }
    int getRollNo(){
        return rollNo;
    }
};

int Student::addmissionNo = 1000;



int main(){

    std::cout<<K::getA()<<"\n";
    
    //demonstrating the use of static field 

    Student s1;
    std::cout<<s1.getRollNo()<<"\n";
    Student s2;
    std::cout<<s2.getRollNo()<<"\n";;
    Student s3;
    std::cout<<s3.getRollNo()<<"\n";;
    
    
    return 0;


}


