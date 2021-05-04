/*
 * Author : KaiserSakhi
 * Date : 30-03-21
 * Environment : WSL KaliLinux , Vim
 */

// program to demonstrate pure virtual function
// virtual functions provide a way to make interfaces
#include<iostream>


class Car{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void changeGear(int gear) = 0;
};

class Tayota : public Car{
    std::string modelName;
    int year;
public:
    Tayota(const std::string &name, int year){
        this->modelName.append(name);
        this->year = year;
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
};

int main(){
    Tayota t1("K27", 2017);
    t1.start();
    t1.changeGear(2);
    t1.changeGear(3);
    t1.changeGear(1);
    t1.stop();
    return 0;
}