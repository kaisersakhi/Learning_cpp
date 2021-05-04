/*
    Date : 12-13-2020
    Author : KaiserSakhi
    Environment : Linux , VS Code

*/

#include<iostream>

int main(){
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    int mat2[3][2] = {9,8,7,6,5,4};
    int mulRes[3][2];
    int sum = 0;
    int col = 0;
    int n = 3;
    for (int i = 0 ; i < 3 ; ++i){
        for (int j = 0; j < n; j++) {
            
            sum += mat1[i][j] * mat2[j][i];


        }
        mulRes[i][col] = sum;
        sum = 0;
        if (col == 1){
            col = -1;
        }

        col++;
        
    }

    for (int i = 0 ; i < 3 ; ++i){
        for (int j = 0 ; j < 2 ; ++j){
            std::cout<<mulRes[i][j]<<" ";
        }

        std::cout<<"\n";
    }
    
    return 0;
}