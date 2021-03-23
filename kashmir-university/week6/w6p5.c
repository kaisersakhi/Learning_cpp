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



int main(){

    const int CONSO = 0;
    const int VOVWL = 1;
    int count[2] = {0,0};
    char sentnc[50];
    int len = 0, i = 0;
    char ch;
    printf("Enter Your Sentence : ");
    fflush(stdin);
    scanf("%[^\n]", sentnc);
    len = strlen(sentnc);
    strupr(sentnc);
    for (; i < len ; ++i){
        ch = sentnc[i];

        if(ch == 65 || ch == 69 || ch == 73 || ch == 85 || ch == 79){
            ++count[VOVWL];
        }else if (ch >= 65 && ch <= 90){
            ++count[CONSO];
        }
    }

    printf("Vowels are : %i\nConsonants are : %i", count[VOVWL], count[CONSO]);

    return 0;
}