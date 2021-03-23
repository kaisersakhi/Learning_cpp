/*
    Date : 08-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

/*

    Implement a program which uses multiple files for holding multiple functions which are compiled
    separately, linked together and called by main(). Use static and extern variables in these files

    also with this i will implement the 2 problem of the week
*/

#include<stdio.h>
#include "student.h"




int main(){
    struct Student tempStudent;
    char name[20] = "Kaiser Sakhi Bhat";
    int rollNo = 27;
    if(add(name, rollNo))
        printf("Student Added!\n");

    printf("%s, %i",getStudent(rollNo).name, getStudent(rollNo).rollNo);

    return 0;
    
}