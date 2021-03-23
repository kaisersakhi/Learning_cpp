/*
    Date : 10-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/



/*
 Write a program to check if two strings are same or not?

*/

#include<stdio.h>
#include <string.h>
#include<stdlib.h>

int match(char *, char *);

int main(){

    char s1[] = "kaiser";
    char s2[] = "kaiser";

    if (match(s1,s2)){
        printf("Strings Match!");
    }else{
        printf("Not Match!");
    }

    return 0;
}

int match(char *s1, char *s2){
    int s1l = strlen(s1);
    int s2l = strlen(s2);
    int i = 0;
    if (s1l != s2l)
        return 0;
    for (i = 0; i < s1l; ++i) {
        if (s1[i] == s2[i])
            continue;
        else
            return  0;
    }
    return 1;
}

