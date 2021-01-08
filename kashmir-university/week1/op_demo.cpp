/*
    Date : 23-12-2020
    Author : KaiserSakhi
    Environment : Windows
*/


#include<iostream>
int main(){
    using namespace std;

    /*
        well, this program was for the demonstration of output stream;
        cout is a object of ostream class which is declared inside std;

    */
    int i = 0;
    int j, k;
    int row_size = 5;
    for (i; i < row_size; ++i)
    {

        /*
            this loop is for upside down right angle space triangle and nothing else , you can just think this as a trick :)
            for every iteration of i this loop will run from 10 -- to i (decrementing to i)
        */
        for (j = row_size; j >= i; --j)
        {
            std::cout << "  ";
        }

        for (k = 0; k <= i; k++)
        {
            //this star will print after 'j' spaces in each i , 'k' times
            std::cout << "  * ";
        }
        //this is jsut new line char
        std::cout << std::endl;

       
    }
    for (i = 0; i < row_size-2; ++i)
    {
        cout << "\t      **\n";
    }

    cout<<"    ";
    for (i = 0; i < row_size + 2; ++i)
    {
        cout << " * ";
        
    }

        return 0;
 }