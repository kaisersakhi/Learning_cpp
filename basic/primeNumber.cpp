/*
    Date : 11-27-2020
    Author : KaiserSakhi
*/

// ENDPOINT = https://github.com/kaisersakhi/Learning_cpp/blob/main/basic/primeNumber.cpp

#include<iostream>


void betterWay();
void myWay();
bool isPrime(int num);

int main(){
    // betterWay();
    myWay();
}

// i like dividing the problem
void myWay(){
    int i;
    int n = 20;
    for (i = 2 ; i <= n ; i++){
        if (isPrime(i)){
            std::cout<< i <<std::endl;
        }
    }
}
//this function will only check for one number , and nothing else
bool isPrime(int num){

    int i;
    
    for (i = 2 ; i < num ; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

//by prof. of University Of Kashmir
void betterWay(){
    int i = 2, j;
    int n = 20;
    int lim;
    for (i = 2; i <= n; i++){
        //by dividing 'i' we're cutting down the  possible values of i by half
        lim = i / 2;
        //this loop will run from 2 to lim ,
        for (j = 2; j <= lim; j++)
        {
            //if the number is composite then this loop will not exhuast all values of j , and 'j' will be small
            if (!(i % j))
                break;
        }
        
        // check again if all the values of j are not used  ,that means we haven found the divisor and number is composite
        //if not , have we found the divisor then loop 'j' has exhuasted and that means number is prime ,
        //if number is prime then , this condition will be true becuase j is greater [because j = lim + 1]
        if (j > (i / j))
            printf("\n Prime %d \n", i);

    }
}