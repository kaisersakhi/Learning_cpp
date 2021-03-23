/*
    Date : 07-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

//Write a C function to remove duplicates from an ordered array


#include<stdio.h>
#define INT_MIN -2147483648

int main(){

    int arr[] = {10,10,10,30,40,40,50,80,80,100};
    int cur = INT_MIN;
    int size = 10;
    int i = 0;
    for ( i ; i < size; ++i) {
        if (arr[i] > cur)
        {
            cur = arr[i];
            printf("%i,",cur);
        }
        
    }

    return 0;
}

