/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

//write a program in c++ which cretes a single-inheritance hierarchy of person,employee and teacher
//classes and creates instaces of each class using new and stores them in an array of person *

#include<iostream>


class Person{
private:
    std::string name;
    int age;
    float height;
public:
    Person(std::string &name, int age, float height){
        this->name = name;
        this->age = age;
        this->height = height;
    }
    std::string getName(){return name;}
    int getAge(){return age;}
    float getHeight(){return height;}
};
class Employee : public Person{
private:

    static int eID_gen;
    int E_ID;
    double salary;
public:
    Employee(std::string &name, int age, float height, double salary):Person(name,age, height){
        this->salary = salary;
        ++eID_gen;
        E_ID = eID_gen;
    }
    void setSalary(double s){
        salary = s;
    }
    int getEID(){
        return E_ID;
    }
};

int Employee::eID_gen = 1000;

class Teacher : public Employee{
private:
    std::string subject;
public:
    Teacher(std::string &name, int age, float height, double salary,std::string sub):Employee(name, age, height, salary){
        this->subject = sub;
    }
    std::string getSub(){
        return this->subject;
    }

};

int main(){
    std::string name = "Kaiser Sakhi";
    Teacher teacher(name, 35, 5.7f, 2000, "Java Programing");
    std::cout<<"Employee ID : "<<teacher.getEID()<<"\n";
    
    std::string name1 = "Tahir", name2 = "Ali", name3 = "Qais";

    Person *person[3];
    Teacher *t1 = new Teacher(name1, 40, 5.2f, 5000, "Python Programing");
    Employee *e1 = new Employee(name2, 25, 5.1f, 3050);
    Person *p1 = new Person(name3, 14, 4.3f);
    
    person[0] = t1;
    person[1] = e1;
    person[2] = p1;

    std::cout<<"Name :"<<person[0]->getName()<<"\n";
    std::cout<<"Name :"<<person[1]->getName()<<"\n";
    std::cout<<"Name :"<<person[2]->getName()<<"\n";


    return 0;
}