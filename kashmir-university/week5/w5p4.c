/*
    Date : 08-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/



/*
    Write a program which creates Student (struct) objects using malloc and stores their pointers in an 
    array. It must free the objects after printing their contents.
*/
#include<stdio.h>
#include<stdlib.h>

struct Student{
    char *name;
    int rollNo;
};

int main(){
    struct Student *s[2];
    char *name[2];
    int rollNo[2];
    int i = 0;

    char n[] = "Kaiser sakhi";
    char n2[] = "Muhammad Ali";
    name[0]  =  n;
    name[1]  = n2;
    rollNo[0] = 27;
    rollNo[1] = -1;
    for (i ; i < 2 ; ++i)
        s[i] = (struct Student*) malloc(sizeof(struct Student));

    s[0]->name = name[0];
    s[0]->rollNo = rollNo[0];

    s[1]->name = name[1];
    s[1]->rollNo = rollNo[1];


    for (i =  0 ; i < 2 ; ++i)
        printf("%s, %i\n", s[i]->name, s[i]->rollNo);

    for (i =  0 ; i < 2 ; ++i)
        free(s[i]);

    return 0;
}