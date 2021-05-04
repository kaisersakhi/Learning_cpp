/*
    Date : 11-21-2020
    Author : KaiserSakhi
*/

/*
    here i will desmonstrate the use of enum
*/

#include<iostream>

enum Test{
    ONE,TWO,THREE
};

int main(){

    Test t;
    t = ONE;
    switch (t)
    {
    case ONE:
        std::cout<<"one";
        break;
    case TWO:
        std::cout<<"Two";
        break;
    case THREE:
        std::cout<<"Three";
        break;
    
    default:
        std::cout<<"None";
        break;
    }
    return 0;
}