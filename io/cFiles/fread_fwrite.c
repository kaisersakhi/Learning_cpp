/*
    Author : KaiserSakhi
    Date : 10-01-2021
    Environment : WSL KaliLinux

*/

// this program will desmonstrate the use of fread() , fwrite() & fseek()  functions in c
//these functions are specially used with binary read and write with fseek() , ftell(), rewind() and many more


#include<stdio.h>
#include<stdlib.h>


void mWrite();
void mRead();

struct Student{
    int id;
    char *name;
};
typedef struct Student Student;

// number of students in a class
const int STUDENT_ROLL = 2;
Student students[2];
Student buffer;

// this is where the data file will be stored
char filePath[] = "../files/rw.dat";


int main(){

    char name1[] = "Kaiser Sakhi";
    char name2[] = "Tahir Sakhi";
    students[0].id = 1;
    students[0].name = name1;

    students[1].id = 2;
    students[1].name = name2;

    mWrite();
    mRead();
    // printf("%s", students[1].name);
    return 0;
}

void mWrite(){

    FILE *file = fopen(filePath,"w+b");
    int i = 0;
    if (file == NULL){
        puts("Operation Abort!");
        return;
    }


    for (i = 0 ; i < STUDENT_ROLL ; ++i){
        // write all the emlents of the student array in byte form
        fwrite(&students[i], sizeof(Student), 1 , file);
    }

    fclose(file);
}

void mRead(){
    FILE *file = fopen(filePath,"r+b");

    int i = 0;
    // if file is null that means , file wasn't there or something else
    if (file == NULL){
        puts("Operation Abort!");
        return; 
    }


    //loop until fread returns 0 , which means no of data objects
    while (fread(&buffer, sizeof(Student), 1, file) > 0){

        printf(" ID : %d & Name : %s \n", buffer.id, buffer.name);

    }



    fclose(file);
}
    // ::::: OUTPUT {expected}
/*
    ID : 1 & Name : Kaiser Sakhi 
    ID : 2 & Name : Tahir Sakhi
*/

// actually these are both my names ;)