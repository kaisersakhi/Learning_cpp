/*
    Author : KaiserSakhi
    Date : 12-01-2021
    Environment : WSL KaliLinux

*/

// this program will desmonstrate the use of fprintf() and fscanf() functions

#include<stdio.h>

//for fun i will genrate a series , lets say x^2;
int square(int);
void mPrintf();
void mScanf();

char fileName[] = "../files/print_scan.txt";


int main(){

    // mPrintf(); // un-comment this 
    mScanf();
    return 0;
}


void mPrintf(){
    int i = 0;

    FILE *file = fopen(fileName, "w");

    if (file == NULL){
        puts("Something went wrong!");
        return;
    }

    for (i = 0 ; i < 9999 ; ++i){
        fprintf(file,"%d = %d \n",i , square(i));
    }

    fclose(file);
    
}

void mScanf(){
    int i = 0;
    int a , b;

    FILE *file = fopen(fileName, "r");

    if (file == NULL){
        puts("Can't find specified file!");
        return;
    }

    // for now limit to 10
    for (i = 0 ; i < 10 ; ++i){
        fscanf(file, "%d = %d ", &a , &b);
        printf("%d = %d \n", a ,b);
    }

    fclose(file);
}

int square(int x){
   return x*x;
}
