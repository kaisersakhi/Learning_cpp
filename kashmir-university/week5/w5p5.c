/*
    Date : 08-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/



/*
   Write a function char* stuff(char* s1,char* s2,int sp, intrp) to stuff string s2 in string s1 at position sp,
replacing rp number of characters (rp may be zero).

ME:- i think rp refers to the numbers of chars we want to overwrite  from sp of  of s1
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* stuff(char* s1, char* s2, int sp, int rp);
int main(){

    char s1[] = "Kaiser";
    char s2[] = "Sakhi";
    printf("%s", stuff(s1, s2, 3, 2));
    return 0;
}

char* stuff(char* s1, char* s2, int sp, int rp){

    int s2Len = strlen(s2);
    int s1Len = strlen(s1) ;
    int totalLen = s1Len + s2Len + 1 -rp;

    int i = 0;
    char * cp = (char *) malloc(totalLen);

    for (i ; i < sp - rp; ++i){
        cp[i] = s1[i];
    }

    for (i = sp - rp ; i < sp + s2Len -1; i++){
        cp[i] = s2[i - (sp-rp)];
    }

    for (i = sp + s2Len -rp ; i < totalLen; ++i){
        cp[i] = s1[i - (s2Len - rp)];
    }

    cp[totalLen] = '\0';
    return cp;
}