/*
    Date : 07-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

// sum of n natural numbers
#include<stdio.h>

int sum(int);

int main(){

    printf("%i", sumloop(40));

    return 0;
}

int sumf(int n){

    //formula n(n+1)/2

    return (n*(n+1))/2;
}


int sumloop(int n){
    int i = 1;
    int sum = 0;

    for (i ; i <=n ; ++i){
        sum += i;
    }
    return sum;
}