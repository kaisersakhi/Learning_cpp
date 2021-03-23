/*
    Date : 07-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

// to desmonstrate the factorial of n with recursion

#include<stdio.h>
int fact(int);
int main(){

    printf("%i", fact(5));

    return 0;
}

int fact(int n){
    if (n == 0)
        return 1;
    return n * fact(n-1);
    
}