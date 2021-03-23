/*
    Date : 10-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/



/*
  Write a program to concatenate two strings without using the inbuilt function?
  ME: i donno why im laughing at this
*/

#include<stdio.h>
#include <string.h>
#include<stdlib.h>
char * concat(char *,char *);

int main(){

    char str1[] = "Kaiser ";
    char str2[] = "Sakhi";
    char * p = concat(str1,str2);


    printf("%s ", p );
    free(p);

    return 0;
}

char *concat(char* s1, char* s2){
    int s1l = strlen(s1), s2l = strlen(s2), i =0;

    char *temp = (char *) malloc(s1l+s2l+1);

    for (i ; i < s1l ; ++i){
        temp[i] = s1[i];
    }


    for (i = s1l ; i < s1l + s2l ; ++i){
        temp[i] = s2[i - s1l];
    }

    temp[s1l + s2l ] = '\0';

    return temp;

}