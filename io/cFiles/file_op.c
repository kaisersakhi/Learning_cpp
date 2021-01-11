/*
    Author : KaiserSakhi
    Date : 10-01-2021
    Environment : WSL KaliLinux

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void mRead();
void mWrite();
void mAppend();
void getFileName();

char rPath[] = "../files/";
const int BUFFER_SIZE = 256;
char *buffer;//[256]
char  fileName[50];

int main(){


    int option = 0;
    
    puts("What you want to do? : \n1: Read a file\n2:Write to a file\n3:Append to a file");
    scanf("%d",&option);

    switch (option)
    {
        case 1:
            getFileName();
            mRead();
            break;
        case 2:
            getFileName();
            mWrite();
            break;
        case 3:
            getFileName();
            mAppend();
            break;

        default:
            puts("Option didn't matched any!");
            break;
    }
    return 0;
}

void mRead(){

    
    FILE *file = fopen(rPath, "r");
    char ch;
    if (file == NULL){
        puts("Sorry! couldn't open your file.");
        return;
    }

    do {
        ch = getc(file);
        // i dont wnat a new line char on console , this will print all in on eline
        if(ch == '\n')
            ch = ' ';
        printf("%c", ch);
    }while(ch != EOF);

    fclose(file);
    // printf("%s", rPath);
}

void mWrite(){
    
    // w+ mode is for creating , if doesn't exist , a file and writing
    FILE *file = fopen(rPath, "w+");
    

    buffer = (char *) malloc(BUFFER_SIZE);

    if (file == NULL){
        puts("Something went wrong!");
        return;
    }

    puts("Enter The Data : limit:256");
    //flush the buffer of stdin so that fgets wont get the new line character
    fflush(stdin);
    fgets(buffer, BUFFER_SIZE, stdin);
    // fputs(buffer,stdin);
    if (fputs(buffer, file) == EOF){
        puts("Couldn't Write to the file!");
    }else{
        puts("Write Success!");
    }

    free(buffer);
    fclose(file);


}

void mAppend(){

    

    // this mode will first create the file , if it didn't exits , then append the txt;
    FILE *file = fopen(rPath, "a+");
    buffer = (char *) malloc(BUFFER_SIZE);
    puts("Contents of the file are :");
    mRead(fileName);
    puts("Enter The Data : limit:256");
    //flush the buffer of stdin so that fgets wont get the new line character
    fflush(stdin);
    fgets(buffer, BUFFER_SIZE, stdin);


    if (fputs(buffer, file) == EOF){
        puts("Couldn't Append to the file!");
    }else{
        puts("Append Success!");
    }

    free(buffer);
    fclose(file);
}

void getFileName(){
    puts("Enter the file name :");
    scanf("%s",fileName);
    strcat(rPath, fileName);
}
