/*
    Date : 13-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

//PROGRAM : to desmonstrate the use of access modifiers or accessors

#include<iostream>

class Main{
    /*
    The private keyword is used to create private members (data and functions).
    The private members can only be accessed from within the class.
    However, friend classes and friend functions can access private members.
    */
private:

    int a;
    int b;
    //this is a private member funtion which can be only called by a member function of same class or friend
    int mAdd(){
        return pa+pb;
    }

/*
    The protected keyword is used to create protected members (data and function).
    The protected members can be accessed within the class and from the derived class.
*/
protected:

    int pa;
    int pb;

    void set(){
        pa = a;
        pb = b;
    }

/*
    The public keyword is used to create public members (data and functions).
    The public members are accessible from any part of the program.
*/
public:

    Main(int x, int y){
        a = x;
        b = y;
        set();
    }

    int add(){
        return mAdd();
    }

};

int main(){
    Main m(5,8);
    std::cout<<m.add()<<"\n";
    return 0;
}