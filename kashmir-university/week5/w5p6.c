/*
    Date : 10-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

//well, this is almost 12am, completed now , let's coment it otherwise i have to rewrite it next time :)
/*
    Write a program to input name, address and telephone number of ‘n’ persons (n<=20). Sort according
    to the name as a primary key and address as the secondary key. Print the sorted telephone directory.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char *name;
    char *address;
    int phone;
}Person;

void sort(Person **);
Person* createPerson(char *,char *, int);
void display(Person **);
void delete(Person **);
//number of people, we are going to sort and work wiht
const int TOTAL_PEOPLE = 3;

int main(){

    // this is the array of pointer of type person , simply put pointer to a pointer {each element}
    Person *persons[TOTAL_PEOPLE];
    //this is like the buffer, every tiem use enters, will store it temporarily here
    char name[20];
    //same with address
    char address[30];
    int number;
    //create two null pointers will tell you what we have to do with em
    char *p = NULL, *p2 = NULL;
    int i = 0;

    //loop through all person, that user is going to enter
    for (i = 0; i < TOTAL_PEOPLE; ++i){
        //input name
        printf("\nEnter Name of Person %i :",i+1);
        scanf("%[^\n]",name);
        //this is naccesssarn because \n  is in the input buffer , if we dont next scanf() is going to skip cuz it will read \n
        fflush(stdin);
        
        //read in address
        printf("\nEnter Address for person %i: ", i+1);
        scanf("%[^\n]", address);
        fflush(stdin);
        
        //read in number
        printf("\nEnter Phone No for person %i :", i+1);
        scanf("%i",&number);
        fflush(stdin);
        
        //now create another memory block for name, 
        p = (char *) malloc(20);
        //compy the name, where p in pointing, these 2 fields are going to be pointed by 
        //specific objects of person, which ever these blongs to
        p = strcpy(p,name);
        //same with p2
        p2 = (char *) malloc(30);
        p2 = strcpy(p2, address);
        //now, suppy these to create person, 
        //creatPerson() will retrn a pointer to a structure with the following argumetns as fields 
        //store the pointer at ith postion
        persons[i] = createPerson(p, p2, number);
    }

    //after all, call sort
    sort(persons);
    //then ofFcourse display;
    display(persons);

   // persons[0] = createPerson("Kaiser Sakhi\0", "Kashmir\0",9908990812);

    delete(persons);

    return 0;

}

// this functions will create a structure dynamically with mallocc
// and return the pointer, memebers as the fields supplied
Person* createPerson(char* name, char* address, int number){

    //create a temp pointer , by the way this is not actully temp :)
    Person* temp = (Person *) malloc(sizeof(Person));
    temp->name = name;
    temp->address = address;
    temp->phone = number;
    return  temp;
}
//this is obviously going to display, 
void display(Person **p){
    int i = 0;
    for ( i = 0; i < TOTAL_PEOPLE; i++){

        printf("%s  ,  %s   ,   %i\n",p[i]->name, p[i]->address, p[i]->phone);
    }

}

//hmm, u know what this is for
void sort(Person **p){
    //create a temp person, for swaping
    Person temp;

    int i = 0, j=0;
    // BUBBLE SORT;
    for (j = 0; j < TOTAL_PEOPLE; ++j) {
        for (i = 0; i < TOTAL_PEOPLE-1-j; ++i) {
            //IF THE FIRST CHAR OF iTH PERSON IS GREATER IN ORDER THEN i+1TH PERSON
            //THEN SWAP THOSE PERSONS IN THE MAIN LIST
            // THAT;S IT
            if ((int)p[i]->name[0] > (int)p[i+1]->name[0]){
                temp = *p[i];
                *p[i] = *p[i+1];
                *p[i+1] = temp;
            }
        }
    }
}

void delete(Person **p){
    int i = 0;
    for (i = 0; i < TOTAL_PEOPLE; i++)
    {
        free(p[i]);
    }
    
}

/*

TEST WITH INPUTS:
   
    kaiser sakhi  ,  kashmir   ,   34567
    ali  ,  kashmir   ,   98765433
    bhat  ,  uae   ,   345678

*/