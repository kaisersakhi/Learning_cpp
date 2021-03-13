/*
    Date : 13-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

//PROGRAM : to desmonstrate  copy constructor , shallow copy , deep copy


#include<iostream>
#include <stdlib.h>
#include<cstdio>
#include "rectangle.h"

int main(){

    Rectangle r1(1,11),r2;
    Rectangle rectangle1(22.22,11.11);
    int w1 =10;
    int w2 = 20;
    r1.setWeight(&w1);

    // this is shallow copy : it also points to the smae memory location where r1 is pointing
    // color is a pointer, shollow copy copies the pointer address, it doesn't create new location : for that we
    //have to override the defualt copy constructor ;
    r2 = r1;

    // this here will call the copy constructor , and will execute my code;
    // i have written the for deep copy in the copy constructor
    rectangle1.setWeight(&w2);
    Rectangle rectangle2(rectangle1);



    /**
     * shallow copy only copies the pointer address, doesn't create new mem.
     * while deep copy copies the contents of pointer not the address
     * */

    printf("Enter weight FOR SHALLOW COPY = : ");
    scanf("%i",&w1);
    printf("Enter weight for rectangel1 after copy ");
    scanf("%i",&w2);



    std::cout<<"************FOR-SHALLOW COPY*********\n";
    std::cout<<"The Weight of r2 is : "<<*r2.getWeight()<<"\n";
    std::cout<<"The area of r2 is : "<<r2.area()<<"\n";
    std::cout<<"The Weight of r1 is : "<<*r1.getWeight()<<"\n";
    printf("color pointer of r1 = %li \n", (long int) r1.getWeight());
    printf("color pointer of r2 = %li",(long int) r2.getWeight());


    std::cout<<"\n\n**********FOR-DEEP COPY***********\n";
    printf("The Weight of rectangle2 is : %i\n",*rectangle2.getWeight());
    std::cout<<"The area of rectangle2 is : "<<rectangle2.area()<<"\n";
    std::cout<<"The Weight of rectangle1 is : "<<*rectangle1.getWeight()<<"\n";
    printf("color pointer of rectangle1 = %li \n", (long int) rectangle1.getWeight());
    printf("color pointer of rectangle2 = %li",(long int) rectangle2.getWeight());

    return 0;
}