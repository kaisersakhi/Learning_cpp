/*
    Date : 12-04-2020
    Author : KaiserSakhi
    Environment : Linux , VS Code
*/

#include<iostream>
#include<string>

void rightTriangle(int);
void paramid(int);
void upSideDownTriangle(int);

/*

    i will be adding more patterns if i encounter any
*/

int main(int agc , char * args[]){

    int rowSize = 5;
    //paramid(rowSize);
    upSideDownTriangle(rowSize);
    return 0;
}

void rightTriangle(int row_size){
    int i = 0;
    int j = 0;

    for (i ; i < row_size ; ++i){
        for (j = 0 ; j < i ; ++j){
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }
}

void paramid(int row_size){




    int i = 0 ;
    int j , k;
    
    for (i ; i < row_size ; ++i){
        
        /*
            this loop is for upside down right angle space triangle and nothing else , you can just think this as a trick :)
            for every iteration of i this loop will run from 10 -- to i (decrementing to i)
        */
        for (j = row_size ; j >= i ; --j){
            std::cout<<"  ";
        }

        for ( k = 0; k <= i; k++)
        {
            //this star will print after 'j' spaces in each i , 'k' times
            std::cout<<"  * ";
        }
        //this is jsut new line char
        std::cout<<std::endl;
    }
}

void upSideDownTriangle(int row_size){
    int i = 0;
    int j ;

    for (i ; i <= row_size ; ++i){
        for (j = row_size; j >= i ; --j){
            std::cout<<" * ";
        }
        std::cout<<std::endl;
    }
    
}