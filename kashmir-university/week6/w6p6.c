/*
    Date : 11-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

/*
     Write a program that reverse the contents of a string?

*/

#include<stdio.h>
#include<strings.h>

void reverse(char *);

int main(){

    char string[50];
    
    printf("Enter Something To Reverse :");
    fflush(stdin);
    scanf("%[^\n]", string);
    strupr(string);
    reverse(string);
    strlwr(string);
    printf("%s ", string);
    return 0;
}

void reverse(char *string){
    int len = 0, i = 0 , j =0;
    char temp;
    len = strlen(string);
    j = len-1;
    
    for (; i < j; i ++, --j){
        if (string[i] >= 65 && string[i] <= 90){
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
        }
    }
}