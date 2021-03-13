/*
    Date : 13-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/


// PROGRAM : to desmonstrate, object creation in cpp, on stack and heap
#include<iostream>

class Rectangle{
private:
    double xlen;
    double yhig;
public:

    Rectangle(double x, double y){
        xlen = x;
        yhig = y;
    }
    double area(){
        return xlen * yhig;
    }
    double getLength(){
        return xlen;
    } 
    double getHight(){
        return yhig;
    }
};


int main(){

    using namespace std;

    Rectangle rectangle1(22.5f, 11.809f); // this object will be provided space in the heap;

    cout<<"Area of rectangle is : "<< rectangle1.area()<<"\n";

    // this object will be provided space in the heap and rectangle2 is a pointer to that location
    Rectangle *rectangle2 = new Rectangle(45.234, 8.80); 

    cout<<"x = "<<rectangle2->getLength()<<" : y = "<<rectangle2->getHight()<<"\n";


    delete rectangle2; // deallocate the memory as it is in the heap

    return 0;
}