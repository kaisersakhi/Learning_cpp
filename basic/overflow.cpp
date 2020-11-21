/*
    Date : 11-21-2020
    Author : KaiserSakhi

    here i will demonstrate overflow
*/

#include<iostream>

int main(){
    // i donno why i love char , maybe its just one BYTE, anyways
    // char has just value range from -128 to +127
    char a = 127; // 01111111
    /*  jsut add 1 to a 
        01111111
       +00000001
       ----------
        10000000  => -128 
    */
    a += 1; // now a = 10000000 which is nothing but 128 and also first bit is sign bit so its is minus -128
    std::cout<<(int) a << std::endl;

    //*********** Lets do it with int too

    int k = 2147483647; // maximum value an int can have
    //let's push the limit XD
    ++k;
    std::cout<<k << std::endl; // 
    return 0;
}