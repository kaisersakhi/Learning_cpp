/*
    Date : 08-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/


//Write a C++ program to demonstrate the use of scope resolution operator?

#include<iostream>

int main(){
    //i have used scope resolution operator here ::
    //with :: im directly accessing cout object from std namespace
    std::cout<<"Hello World!";
    return 0;
}