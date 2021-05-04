/*
    Author      : KaiserSakhi
    Date        : 01-05-2021
    Environment : WSL KaliLinux

*/

// program to open and close a file , also read the data

#include<fstream>
#include<iostream>

int main(){
    std::ifstream ifs("details.txt");
    std::string name;
    int age;
    ifs>>name;
    ifs>>age;
    std::cout<<name<<" "<<age<<"\n";
    ifs.close();
    return 0;
}