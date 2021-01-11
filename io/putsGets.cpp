/*
    Author : KaiserSakhi
    Date : 10-01-2021
    Environment : WSL KaliLinux

*/

// this program will demonsrate the use of puts() gets() getch() getche() getchar() putchar()


#include<iostream>
#include<stdio.h>
#include<string.h>
// #include<cstdio>
#include<conio.h>
int main(){
    char ch;
    char pch[50];

    //this function writes its string argument to the screen followed by a newline
    puts("Enter Any Character and then press Enter!"); 
    //normally getchar() is implemented in such a way that it buffers input until enter is pressed
    ch = getchar();
    puts("Eneter Another Character getche():");

    // the getche() function is the same as getrche() , but the kiy echoed.
    ch = getche();

    puts("Enter Your Name :");
    
    // the gets() fuctin reads a strin of characters entered at the keyboatd and places them at the addrtess 
    //pointed by its argument;
    gets(pch); // but people say its broken "dont use it"

    //conio has the def of getch() ; getch function waits for a keypress after which it reutrns immediatly
    //it doesn't echo the char on the screen 
    ch = getch();


    

    
    return 0;
}