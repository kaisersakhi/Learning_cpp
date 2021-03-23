/*
    Date : 11-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

/*
     Write a program to check whether a string is a palindrome or not?

*/

#include<stdio.h>
#include<strings.h>

int isPalindrome(char *);

int main(){

    char p[] = "kaiseresiak";
   
    if (isPalindrome(p)){
        printf("Yes, %s is palindrome!\n", p);
    }else{
        printf("No, %s isn't palindrome!\n", p);
    }
    

    return 0;
}

int isPalindrome(char *s){
    int len = strlen(s) ;
    int isEvenLen = len % 2 == 0 ? 1 : 0 ;
    int i = 0 , j = len -1;
    char pivot = '\0';
    int middle = len / 2;

    if (!isEvenLen){
        for (; i < middle && j > middle; ++i,--j){
            if (s[i] != s[j])
                return 0;
        }

    }else{
        while (i < j){
            if (s[i] != s[j])
                return 0;
            ++i;
            --j;
        }
    }
        

    return 1;
}