/*
 *     Date : 07-03-2021
 *         Author : Kaiser Sakhi
 *             Environment : WSL Kali Linux
 *             */

// genrating ginbonacii series with recursion
#include<stdio.h>
	int f(int);
	int main(){
	int i = 1;

	for(i ; i <= 8; ++i){
		printf("%i,",f(i));
        }
         return 0;

}
 //this will return a number at nth postion of the series
int f(int n){
	if(n == 0 || n ==1)
        	return n;
         return f(n-1) + f(n-2);
}
