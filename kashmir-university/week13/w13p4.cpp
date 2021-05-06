/*
    Author : KaiserSakhi
    Date : 02-05-2021
    Environment : WSL KaliLinux

*/

/*
Define a class with appropriate data members and member functions for testing all the error bits with member functions.

This example has a get_int function that tries to read an integer from file, and checks everything. 
The function has three reference-type parameters: 
                                an input stream to read from, 
                                a bool good_flag parameter, which will be set to true if a valid integer was read in, 
                                and an integer variable, in which the read-in value will be stored.
 It returns a bool value that is true if we should continue reading from the stream, and false if we should stop. 
Function main() calls get_int in the condition of a while loop which continues as long as get_int returns true.
When get_int returns, if 'value_is_good' is true, then datum contains an integer that was successfully read in.
         We print it, and then continue to the loop. When get_int returns false, we stop looping and terminate.

Inside get_int, we first attempt to read an integer. If the stream is good, the variable contains a valid
value, and we can continue reading the stream. If eof was encountered, a valid variable value was not
obtained, and it time to stop reading the input. Likewise, if there was a "hard I/O" error. Finally, if the
input was invalid, a valid value was not obtained. The example follows a policy to skip the rest of the
line is skipped, and we should continue trying to read the stream (unless we hit end of file while
skipping the rest of the line). 
*/

#include<fstream>
#include<iostream>

class NumberFile{
public:
    bool get_int(std::ifstream &ips, bool &good_flag, int &num){

        if (true){
            try{
                if (!ips.eof() && !ips.fail() && !ips.bad()){
                    ips>>num;
                    //std::cout<<num<<" \n";
                    good_flag = true;
                }else if (ips.fail()){
                    //std::cout<<"Bad Input.\n"<<ips.tellg()<<"\n";
                    ips.clear(std::ifstream::goodbit);
                    std::cout<<"Skipping Bad Input. \n";
                    ips.ignore(100,ips.widen('\n'));
                    good_flag = true;
                    return good_flag;
                }else{
                    good_flag = false;
                    std::cout<<"End Of The File.\n";
                }
            }catch(...){
                std::cout<<"Terminating Program : Exception Occured!\n";
                good_flag = false;
            }
        }
        return good_flag;
    }
};

int main(){
    std::ifstream inputStream("number_file.txt");
    int num;
    bool value_is_good;
    NumberFile file;
    //this will set the exception for badbit, if occurs will be handled by catch
    inputStream.exceptions(std::ios::badbit);
    do{
        file.get_int(inputStream, value_is_good, num);
        std::cout<<num<<" \n";
    }while(value_is_good);
    inputStream.close();
    return 0;
}
