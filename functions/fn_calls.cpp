/*
    Author : KaiserSakhi
    Date : 09-01-2021
    Environment : WSL KaliLinux

*/

// this program will desmonstrate the diffrent ways in which the arguments can be supplied to a fucntion 
/*
    there are 3 ways a function can be called
        1-> Call By Value
        2-> Call By Address
        3-> Call By Refrence
*/

void fnValue(int, int);
void fnAddress(int* , int*);
void fnRefrence(int&, int&); // whenever we use call by value its same as 'inline' function



#include<iostream>

int main(){


    int a = 30 , b  = 10;
    fnValue(a, b);
    std::cout<<" A and B after fnValue() , "<<a <<" "<<b<<"\n";
    fnAddress(&a, &b);
    std::cout<<" A and B after fnAddress() , "<<a <<" "<<b<<"\n";
    fnRefrence(a, b);
    std::cout<<" A and B after fnRefrence() , "<<a <<" "<<b<<"\n"; 
    
    return 0;
}

void fnValue(int a, int b){

    // these instruction will have no effect on actual arguments 
    // because these variables are local 'copied' and will be destroyed after the call ends
    a = 20 + b;
    ++b;
}

void fnAddress(int * a, int * b){
    // swap by add. 
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void fnRefrence(int &a, int &b){
    // swap by ref.
    a = a + b;
    b = a - b;
    a = a - b;
}

