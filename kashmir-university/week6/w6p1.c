/*
    Date : 10-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/



/*
   Write a program to find the number of occurrences of a word in a sentence ?
   ME: this program is penut butter for me , hahaha, lets roll
*/

#include<stdio.h>
#include <string.h>


int main(){
    int list[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char string[50];
    char ch = 'k';
    int i =0 ;

    printf("Enter you favorite sentence : ");
    scanf("%[^\n]", string);
    strupr(string);
    for (; ch != '\0';){
        ch = string[i];
        if ((int) ch >= 65 || (int) ch <= 90 ){

            list[((int)ch)-65] += 1;
        }

        ++i;


    }

    for (i = 0; i < 26; ++i){
        if(list[i] > 0)
            printf("%c -> %i\n", (char) (i+65) , list[i]);
    }


    return 0;
}
