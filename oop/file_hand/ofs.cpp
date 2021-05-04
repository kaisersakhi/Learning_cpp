/*
    Author      : KaiserSakhi
    Date        : 01-05-2021
    Environment : WSL KaliLinux

*/

// program to open and close a file also write to file 


#include <iostream>
#include <fstream>

int main(){
    std::ofstream ouputFile("details.txt");
    ouputFile<<"Kaiser\n"<<90<<"\n";
    ouputFile.close();
    return 0;
}