/*
 * Author : KaiserSakhi
 * Date : 23-03-21
 * Environment : WSL KaliLinux , Vim
 */
//program to demonstrate overloading
//there are two ways we can implement polymorphism 1-runtime 2-compile time
//this is 1

#include<iostream>

class Number{
	double num;
	// to check what type of no was supplied : no use of it in this program ;)
	char type;
public:
	Number(){
		this->num = 0;
		this->type = 'd';
	}
	Number(double num){
		this->num = num;
		this->type = 'd';
	}
	Number(float num){
		this->num = (double) num;
		this->type = 'f';
	}
	Number(int num){
		this->num = (double) num;
		this->type = 'i';
	}
	auto get(){
		return num;
	}
};

int main(){
	Number num(2);
	Number n2(38.009f);
	Number n3(34.89);
	std::cout<<"ist num : "<<num.get()<<"\n2 num : "<<n2.get()<<"\n3rd num : "<<n3.get();
	return 0;
}
	
