/*
    Date : 11-26-2020
    Author : KaiserSakhi
*/

#include<iostream>

int main(){

    int v3=22;
    int v2=20;
    int v1 = 20;

    if (v1 > v2 && v1 > v3){
        std::cout<<v1<<" is Greatest!"<<std::endl;

    }else if (v2 > v1 && v2 > v3){

        std::cout << v2 << " is Greatest!" << std::endl;

    }else if (v3 > v1 && v3 > v2)
    {
        std::cout << v3 << " is Greatest!" << std::endl;

    }else{

        std::cout <<" Those There Imposters are the same ;)" << std::endl;
    }
    return 0;
}