/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

// write a program in c++ which cretes a multiple-inheritance hierarchy of Teach classes derived 
//from both Person, Employee classes. Each class must implement a show() memeber function and ultilize 
//scope-resolution operator 
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
    void Show(){
        std::cout<<"Name  : "<<name<<"\n";
        std::cout<<"Age   : "<<age<<"\n";
        std::cout<<"Height: "<<height<<"\n";
    }
};

class Employee{
private:

    static int eID_gen;
    int E_ID;
    double salary;
public:
    Employee(double salary){
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
    void Show(){
        std::cout<<"Employee ID  : "<<E_ID<<"\n";
        std::cout<<"Salary       : "<<salary<<"\n";
    }
};

int Employee::eID_gen = 1000;

class Teacher : public Employee , public Person{
private:
    std::string subject;
public:
    Teacher(std::string &name, int age, float height, double salary,std::string sub): Employee(salary),Person(name, age, height){
        this->subject = sub;
    }
    std::string getSub(){
        return this->subject;
    }
    void Show(){
        Person::Show();
        Employee::Show();
        std::cout<<"Subject : "<<subject<<"\n";
    }

};

int main(){
    std::string name = "Kaiser Sakhi";
    Teacher teacher(name, 55, 5.5f, 12000, "Java Programing");
    teacher.Show();
    return 0;
}


