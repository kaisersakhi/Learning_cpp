/*
    Date : 07-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

// gcd and lcm

#include<stdio.h>
#include<math.h>

int gcd(int,int);
int smallest(int,int);
int lcm(int, int);

int main(){

   printf("%i", lcm(20,15));

    return 0;
}

// greatest common divisor, n from the set of common divisors of a and b, the highest is called gcd
//brute force method
int gcd(int a, int b){

    int i = 2;
    int divisor = 0;
    int n = smallest(a,b);
    for (i ; i < n ; ++i){
        if( a % i == 0 && b % i == 0)
            divisor = i;
    }
    return divisor;
}

// the first number, which can be divided by both a and b is called lcm
int lcm(int a, int b){
    //formla = (abs(a.b)/gcd(a,b))

    return (abs(a*b)/gcd(a,b));
}


int smallest(int a, int b){
    if (a < b)
        return a;
    return b;
}