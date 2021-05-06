/*
    Author      : KaiserSakhi
    Date        : 01-05-2021
    Environment : WSL KaliLinux

*/

// program to demonstrate the concepts of abtract class and inner class 

#include<iostream>


class Car{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void changeGear(int gear) = 0;
};

class Tayota : public Car{
public:
    class Details{
    public:
        std::string modelName;
        int year;
    };
    Details d;
    Tayota(const std::string &name, int year){
        d.modelName.append(name);
        d.year = year;
    }
    void start()  {
        std::cout<<"Starting Tayota!\n";
    }
    void stop()  {
        std::cout<<"Stopping Tayota!\n";
    }
    void changeGear(int gear) {
        std::cout<<"Chaging Gear to : "<<gear<<"\n";
    }
    void print(){
        std::cout<<"Model Name :"<<d.modelName<<"\n";
        std::cout<<"Year       :"<<d.year<<"\n";
    }
};



int main(){
    Tayota t1("K27", 2017);
    t1.print();
    t1.start();
    t1.changeGear(2);
    t1.changeGear(3);
    t1.changeGear(1);
    t1.stop();
    return 0;
}