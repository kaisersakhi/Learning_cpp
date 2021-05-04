/*
 * Author : KaiserSakhi
 * Date : 23-03-21
 * Environment : WSL KaliLinux , Vim
 */

//program to desmonstrate operator overloading


#include<iostream>

class Number{
	double num;
public:
	Number(double num){
		this->num = num;
	}
	double operator+(double num2){
		return this->num + num2;
	}
	double get(){
		return this->num;
	}
};

int main(){
	Number n1(27);
	Number n2(69);
	std::cout<<"Sum is : "<<n1+n2<<std::endl;
	return 0;
}
