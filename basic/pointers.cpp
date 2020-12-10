/*
    Date : 12-10-2020
    Author : KaiserSakhi
    Environment : Linux , VS Code
*/

// if youre on windows dont forget to use getch() for program halt;
#include<iostream>

int fun(int);
int main(){
    using namespace std;
    
    /******************** SIMPLE INTEGER POINTER   ******************/
    //pointer declaration  : this varibale can store the address of int type variable 
    int* mPointer; //first step : Declaration 
    int mVar = 75;

    mPointer = &mVar; //Second Step : Assingment 

    cout<<(char) *mPointer << endl; // Third step : Derefrancing 

    /************************ POINTER TO A POINTER **********************/
    // we can have pointer to a pointer or "Double Pointer"
    int **ptr;
    ptr = &mPointer;
    cout<<"Double Pointer : " <<**ptr<<endl;


    /***********************  POINTER ARRAY *************************/
    
    
    // we can also have array of pointers , like
    int *mArrPtr[2];
    int simpleArray[5] = {65,73,83,69,82}; // creating a simple array
    mArrPtr[0] = mPointer; //put the address of mVar
    mArrPtr[1] = simpleArray; // this pointer postion  will have the add of simpleArray "base address"

    cout<<"PointerArray  :->  "<<(char)*mArrPtr[0];
    for (int i = 0 ; i < 5 ; ++i){
        cout<<(char)mArrPtr[1][i];
    }
    cout<<endl;


    /********************  FUNCTION POINTER  *****************************/

    // to be honest didn't knew that we can have pointer to a function , now look

    //we can have pointer to  a function : first create signeture

    int (*funName) (int);

    // now assing the name "address" of the funtion to "funName"

    funName = fun;

    // now call 

    cout<<"Function pointer : "<<(*funName)(-21) << endl; // this is amazing


    /************************ HEAP POINTER **************************************/

    // well , pointer are usefull with heap  i mean dynamic memory allocation 

    int * dMemPtr = new int(22); // you can use malloc also "from C"
    cout<<"From Heap: "<<*dMemPtr<<endl;    
    //
    return 0;
}

int fun(int x){
    return x + 44;
}