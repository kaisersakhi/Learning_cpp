/*
 * Author : KaiserSakhi
 * Date : 29-03-21
 * Environment : WSL KaliLinux , Vim
 */


//Program to demonstrate the concept of inhiritence aslo
// calling the constructor of base class and passing argurmnets to the 
// bse class

#include<iostream>


class Human{
    int ageLimit;
    std::string eyeColor;
    float height;
public:
    Human(int ageL, std::string ec, float height){
        this->ageLimit = ageL;
        this->eyeColor = ec;
        this->height = height;
    }

    int getAgeLimit(){
        return this->ageLimit;
    }
    std::string getEyeColor(){
        return this->eyeColor;
    }

    float getHeight(){
        return this->height;
    }
};

class Person : public Human{
    std::string name;
    std::string phoneNo;

public:
    //constructor for the Person class and with it passing th arguments to the base class
    Person(int ageL, std::string ec, float height, std::string name, std::string phone):Human(ageL,ec,height){

        this->name = name;
        this->phoneNo = phone;
    }
    void display(){
        std::cout<<name<<"\n";
        std::cout<<phoneNo<<"\n";
        std::cout<<getEyeColor()<<"\n";
        std::cout<<getAgeLimit()<<"\n";
        std::cout<<getHeight()<<"\n";

    }
};

int main(){

    Person person(80,"black", 5.7, "Kaiser Sakhi Bhat", "9563298711");
    person.display();
    return 0;

}

