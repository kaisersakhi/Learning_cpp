/*
    Date : 12-04-2020
    Author : KaiserSakhi
    Environment : Linux , VS Code
*/

#include<iostream>

long int fact(int n);
int combination(int n , int r);

//this is a simple program 
// i got the idea from this video https://www.youtube.com/watch?v=MDaHBKx1IyE


int main(){

    //std::cout<<combination(15,3);

    int height = 10;
    int i = 0;
    int j;
    int k;

    //this loop will go from 0 to height(row height )
    for (i ; i <= height ; ++i){
        //this loop will go from height to i [each time]
        for (j =  height*2; j >= i ; --j){
            std::cout<<"   ";
        }

        for (k = 0 ; k <= i ; ++k){
           std::cout<<"  "<<combination(i, k)<< "  ";
        //    std::cout<< i <<" * "<<k;
        }
        std::cout<<std::endl;
    }

}

// this is a recursive function 
long int fact(int n){
    if (n == 0)
        return 1;
    
    return n * fact(n-1);
}

int combination(int n , int r){

    long int denm;
    int i = r;
    long int nemurator  = 1;

    // return anger if  r is greater because we cant choose more from less 
    if ( r > n )
        return 0;

    // i first used simple combination algorithm but that is too inefficient so i did this 
    // this loop will  run from 'r' to 1 
    for ( i ; i > 0 ; --i){
        // add n , n-1 , n-2 ..... for 'r' times 
        nemurator *= n--;
    }

    denm = fact(r);
    return (nemurator/denm);
}