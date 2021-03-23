/*
    Date : 08-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/



/*
    Write a program which takes five arguments on command line, opens a file and writes one argument
    per line in that file and closes the file.
*/


// 1read - write = w or r ; 2arg = filename , 3arg = contents

#include<stdio.h>
#include<strings.h>

int BUFFER_LEN = 1024;

int main(int nargs, char *args[]){
    int i;
    char buffer;
    if (nargs <= 1){
        printf("Error: Not sufficient arguments.\n");
        exit(1);
    }
    
    
    FILE *fp =  fopen(args[2], "a+");

    if (*args[1] == 'w'){
        printf("\nstring len is %i \n",strlen(args[3]));
        fwrite(args[3], sizeof(char), strlen(args[3]), fp);

    }else if(*args[1] == 'r'){

       do{
            buffer = getc(fp);
            printf("%c", buffer);
       }while(buffer != EOF);
    }

    fclose(fp);



    return 0;   
}

