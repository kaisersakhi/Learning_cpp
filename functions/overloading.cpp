/*
    Author : KaiserSakhi
    Date : 08-01-2021
    Environment : WSL KaliLinux
*/

#include<iostream>

int add(int,int,int);
int add(int,int);
float add(float,float);

int main(){

    int a = 10 , b = 20 , c = 30;
    float d = 12.12f , e = 33.333333f;

    std::cout<<"The Addition of "<<a<<" and " << b << "is : "<< add(a,b)<<"\n";
    std::cout<<"The Addition of "<<a<< " , "<<b<<" and "<<c<<"is :"<<add(a,b,c)<<"\n";
    std::cout<<"The Addition of "<<d<<" and "<<e << " is :"<<add(d,e)<<"\n";

    return 0;
}

int add(int x, int y){
    return x+y;
}
int add(int w, int y, int x){
    return w+x+y;
}

float add(float x, float y){
    return (x + y);
}

/*
    OVERLOADING IS HAVING MULTIPLE FUNCTION WITH SAME NAME BUT WITH DIFFRENT ARGUMENT-LIST SIZE , RETURN TYPE
    DOESN'T EFFECT;
*/