/*
    Date : 11-21-2020
    Author : KaiserSakhi
*/
#include<iostream>
//To understan bitwise oprations you must know all truth tables , atleast 'and' , 'or' and 'xor';
int main(){
    // im taking unsigned char as it takes only one byte and that too without sign , it becomes simple to understand
    unsigned char a = 7;
    unsigned char b = 5;
    unsigned char result = 0;

    // bitwise op. is just playin with the variables at bit level
    /*

        bitwise AND
        and is just simple 
        lets say a = 7 and b =5 
        first convert 7 into binary and  5 
        7 = binary(111) and 5 = binary(101)
        and AND em' 
            1 1 1
        And 1 0 1
        -----------
            1 0 1
        
        so , afeter anding 7 n 5 the answer will 101 which is five

   */
    result = a & b;
    //im usint cout here becuase this is about c++ 
    std::cout<<"The result of ,"<< (int) a <<" AND " << (int) b << " is : "<< (int) result << std::endl; 
    //you can do it with printf too
    //printf("The resutl of %d AND %d is : %d", a , b , result);

    /*
        bitwise OR
        or is fairlyh  simple
             1 1 1
        And  1 0 1
        -----------
             1 1 1
            
    */
    result = a | b;
    std::cout << "The result of ," << (int)a << " OR " << (int)b << " is : " << (int)result << std::endl;
    /*
        bitwise XOR
        xor is even simpler XD

              1 1 1
        And   1 0 1
        -----------
              0 1 0
        
    */
    result = a ^ b;
    std::cout << "The result of ," << (int) a << " XOR " << (int) b << " is : " << (int) result << std::endl;

    /*
        bitwise NOT
        Not is kinda unary oprator so i use just b
        as char  is taking 1 byte , so lets represent 
                   0 0 0 0 0 1 0 1
            (NOT)  1 1 1 1 1 1 0 1 

                    so , if we convert [11111101] to dec. we get 250 , simple..
                
    */

    result = ~b;
    std::cout << "The result of, NOT  " << (int) b << " is : " << (int) result << std::endl;

    /*
        bitwise LEFT SHIFT
        left shift is just moving bits to the left side , lets take an exmaple 
            in one byte 
            0 0 0 0 0 1 0 1  << 1 :: which means shift all bit by ones place
         0 |0 0 0 0 1 0 1 0 -> count 8 least significant bits and convert em'
          this wourld be 1010 which is 10    
             , lets do it
    */

    result = b << 1; // here 1 means shift by 1 , move every bit by one
    std::cout << "The result of, Left Shift of  " << (int)b << " is : " << (int)result << std::endl;
    /*
        bitwise RIGHT SHIFT
        same as left shit but here we move every bit to the right instead of left
        in one byte 
            0 0 0 0 0 1 0 1  >> 1 :: which means shift all bit by ones place
            0 0 0 0 0 0 1 0 | 1  : which is  2 
            ^ ^ ^ ^ ^ ^ ^ ^
             \ count only these  
    */
    result = b >> 1; // here 1 means shift by 1 , move every bit by one
    std::cout << "The result of, Right Shift of  " << (int)b << " is : " << (int)result << std::endl;
    return 0;
}