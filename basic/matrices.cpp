/*
    Date : 12-08-2020
    Author : KaiserSakhi
    Environment : Linux , VS Code
*/



/*
    there are 2 ways that a 2 dimensional array can be stored;
        1-> Column Major form
        2-> Row Major form
        C/C++ use second one;
    In genral , for any 2 dmensional array

    a[j][k] is equla to *( ( base-type * )  a + ( j * row-length ) + k)


    for accessing a 2d matrix's element C++ uses this formulae:
         matrix[rowNo][colNo] = baseAddress + (rowNo * colSize + colNo) * sizeof(dataType)
*/



#include<iostream>

const int colSize = 2; // column size
int *addMatrix(int *, int *, int , int);
void initMatrix(int*, int , int);
void displayMyMat(int *, int m , int n);

// for passing a 2d matrix it is neccessary to specify the column size ,
// otherwise c++ doesn't know what size its going to be on runtime

int size = sizeof(int);

void display(int  mat[][colSize], int m , int n){


    /********************* simple way to use 2d arrary's with functions *************************/
    int i = 0 ;
    int j = 0;

    for (i ; i < m ; ++i){
        for (j = 0 ; j < n ; ++j){
            // std::cout<<**(mat+(i * n + j)*sizeof(int) ) << " ";
            std::cout<<mat[i][j] << " ";
        }
        std::cout<<std::endl;
    }
}



int main(){
    using namespace std;
    int i = 0;
    //for simplicty im going to use on 2X2 matrix
    int mat1[2][2] = {{5,12},{8,6}};
    int mat2[2][2] = {2,19,48,61};
    //std::cout<<" "<<mat1<<" ";
    //printf("%u", **(mat1+2));
    display(mat1 ,2,2);
    //cout<< matP << " " << mat1;



    /************************* How i like using 2d matrix "using pointer " *************/


    // i am implementing this with linear 1D array
    int *matrix1 = new int[2*2];
    int *matrix2 =  new int[2*2];

    //lets initilize

    cout<<"\nThe base address of matrix1 : "<<matrix1<<"\n";
    cout<<"\nThe base address of matrix2 : "<<matrix2<<"\n";

    //take input from the console
    cout<<"Enter Elements to First Matrix :\n";
    initMatrix(matrix1, 2, 2);
    cout<<"Enter Elements to Secong Matrix :\n";
    initMatrix(matrix2, 2, 2);


    cout<<"mat 1 \n";
    displayMyMat(matrix1,  2,2);
    cout<<"mat 2 \n";
    displayMyMat(matrix2,  2,2);

    int *matrix3 = addMatrix(matrix1 , matrix2, 2 , 2);

    cout<<"The Addition is .\n";
    displayMyMat(matrix3,  2,2);



    //delete all three mats , becuase they are in heap
    delete[] matrix1;
    delete[] matrix2;
    delete[] matrix3;
    return 0;
}


//this function will take input from the console and store that into given matrix
void  initMatrix(int* mat, int m , int n){
    //int **mat = mat1;
    int i = 0;
    int j = 0;
    long matBaseAddress = (long) mat;

    for (i = 0 ; i < m ; ++i){
        for (j = 0 ; j < n ; ++j){
            std::cout<<"Enter At ["<<i<<"]["<<j<<"] : ";
            std::cin>>*((int *)( matBaseAddress + (( i * n + j) * size)));

        }
    }
}

/*
    this fn will add two matrices , given two pointers (which point to array's each)
    and with demension ( expected same if not will return null) M X N;
*/
int *addMatrix(int *mat1, int *mat2, int m , int n){

    // if the matrices dimensions are not matching then return with nothing , i mean null :)
    if (m != n){
        return nullptr;
    }

    int i= 0,j;

    //converting all base address's to long , im using long for precision as the address is too long
    long mat3base = (long) new int[m*n];
    long mat1base = (long) mat1;
    long mat2base = (long) mat2;


    for (i ; i < m ; ++i){
        for (j = 0 ; j < n ; ++j){
            //see the formula above

            *((int *)(mat3base+ (( i * n + j) * size))) =  *((int *) (mat1base+ (( i * n + j) * size))) +   *((int *) (mat2base+ (( i * n + j) * size)));
        }
    }

    /*

     oooooooooooookay , i know it confusing but hey lets break it down ,
     look, btw it took me three days to find a bug with pointer but i love it
     this is pointer arthmetics right ,
     first you should understand this formula , this is important:
        matrix[rowNo][colNo] = baseAddress + (rowNo * colSize + colNo) * sizeof(dataType)

        here the formula wont work as intended with the pointer directly that is why im first
        converting a pointer to a varible and adding the value by using above formula which to this point is a varibale not a pointer
        now after getting the value by using formula , convert this value back to a pointer

        example :
            *((int *)(mat3base+ (( i * n + j) * size)))
            here mat3base is variable not a pointer and im adding some value to it
            and after the addition im converting it back to pointer by casting  (int *)
            now , at this point it is a pointer :) and im using * to derefrence it "star at the start;
            that it.


     never wrote a comment , this big :)
     */


    //mat3base is a number not a pointer , that is why im casting it here to integer pointer and return
    return (int *)mat3base;
}


void displayMyMat(int * mat, int m , int n){
    long matBase = (long) mat;
    for (int i = 0; i < m ; ++i){
        for (int j = 0 ; j < n ; ++j){

            std::cout<<*((int *)(matBase+ (( i * n + j) * size))) << " ";
        }
        std::cout<<"\n";
    }
}
