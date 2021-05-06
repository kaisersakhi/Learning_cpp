/*
    Author : KaiserSakhi
    Date : 30-04-2021
    Environment : WSL KaliLinux

*/

// program to overlaod the '+" operator so that it can add tow matrices";

#include<iostream>

class Matrix{
    int mat[2][2];
public:

    void put(int value, int m , int n){
        mat[m][n] = value;
    }

    int get(int m, int n){
        return mat[m][n];
    }

    Matrix operator+ (Matrix m){
        Matrix sum_mat;
        for (int i = 0; i < 2 ; ++i){
            for (int j = 0 ; j < 2 ; ++j){
                sum_mat.put( this->mat[i][j] + m.get(i,j),  i ,j) ;
            }
        }
        return sum_mat;
    }
};

int main(){
    Matrix mat1;
    Matrix mat2;
    Matrix sum_mat;
    mat1.put(1,0,0);
    mat1.put(2,0,1);
    mat1.put(3,1,0);
    mat1.put(4,1,1);

    mat2.put(5,0,0);
    mat2.put(6,0,1);
    mat2.put(7,1,0);
    mat2.put(8,1,1);

    sum_mat = mat1 + mat2;

    for (int i = 0 ; i < 2 ; ++i){
        for (int j = 0 ; j < 2; ++j){
            std::cout<<sum_mat.get(i,j)<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
