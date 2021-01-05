/*\

    Author : KaiserSakhi
    Date : 1-5-2021
    Environment : WSL KaliLinux

*/

#include<iostream>
#include<stdio.h>
int mat[3][3] = {45,45,45,45,45,45,45,45,45};

const int playerX = 88,playerO = 79;
int limit = 1;



int checkMat();
void setValue(int pos, int player);
void showMat();

int main(){
    //postion for matrix
    int turnPostion = 0;
    
    //for fliping the user
    int currentPlayer = playerO;
    while (1){

        printf("%c's Turn : ", currentPlayer);
       
        std::cin>>turnPostion;
        printf("\n");

        setValue(turnPostion, currentPlayer);

        showMat();
        if (checkMat() == currentPlayer){
            printf("Player %c WON!\n", currentPlayer);
            break;
        }

        if ( currentPlayer == playerO ){
            currentPlayer = playerX;
        }else if( currentPlayer == playerX){
            currentPlayer = playerO;
        }

        if (limit == 9){
            printf("Game Draw!\n");
            break;
        }
        limit++;
        
        
    }
    

    return 0;
}


void setValue(int position, int player){
    int row , col;
    if (position == 1){
        //0,0
        row = 0;
        col = 0;
    }else if (position == 2){
        //0,1
        row = 0;
        col = 1;
    }else if (position == 3){
        //02
        row = 0;
        col = 2;
    }else if (position == 4){
        //10
        row = 1;
        col = 0;
    }else if (position == 5){
        //11
        row = 1;
        col = 1;
    }else if (position == 6){
        //12
        row = 1;
        col = 2;
    }else if (position == 7){
        //20
        row = 2;
        col = 0;
    }else if (position == 8){
        //21
        row = 2;
        col = 1;
    }else if (position == 9){
        //22
        row = 2;
        col = 2;
    }

    if ((mat[row][col] == 45 ))
    {
        // that means position is not used;
        mat[row][col] = player;
    }else{
        printf("Postion Aleardy used!\n");
        --limit;
    }
    
    
}

void showMat(){
    for(int i = 0 ; i < 3 ; ++i){
        for (int j = 0 ; j < 3 ; ++j){
            printf("| %c  ", mat[i][j]);
        }
        printf("\n");
    }
}

int checkMat(){

    if ((mat[0][0] == playerO ) && (mat[0][1] == playerO ) && (mat[0][2] == playerO)){
        // won by playerO
        return playerO;

    }else if((mat[0][0] == playerX ) && (mat[0][1] == playerX ) && (mat[0][2] == playerX)){
        // won by X
        return playerX;

    }else if ((mat[1][0] == playerO ) && (mat[1][1] == playerO ) && (mat[1][2] == playerO)){
       
        return playerO;       
        // row 2 won by O

    }else if ((mat[1][0] == playerX ) && (mat[1][1] == playerX ) && (mat[1][2] == playerX)){
        
        // row 2 won by X
        return playerX;

    }else if ((mat[2][0] == playerO ) && (mat[2][1] == playerO ) && (mat[2][2] == playerO)){
        
        //row 3 won by O
        return playerO;

    }else if ((mat[2][0] == playerX ) && (mat[2][1] == playerX ) && (mat[2][2] == playerX)){
        
        //ROW 3 WON BY X
        return playerX;

    }else if ((mat[0][0] == playerO ) && (mat[1][0] == playerO ) && (mat[2][0] == playerO)){
        
        // col 1 won by O
        return playerO;

    }else if ( (mat[0][0] == playerX ) && (mat[1][0] == playerX ) && (mat[2][0] == playerX) ){
        
        //col 1 won by X
        return playerX;

    }else if( (mat[0][1] == playerO ) && (mat[1][1] == playerO ) && (mat[2][1] == playerO) ){
       
        //col 2 won by O
        return playerO;

    }else if ( (mat[0][1] == playerX ) && (mat[1][1] == playerX ) && (mat[2][1] == playerX) ){
        
        // col 2 won by X
        return playerX;

    }else if ( (mat[0][2] == playerO ) && (mat[1][2] == playerO ) && (mat[2][2] == playerO) ){

        //col 3 won by O
        return playerO;   

    }else if ( (mat[0][2] == playerX ) && (mat[1][2] == playerX ) && (mat[2][2] == playerX)){
        
        //col 3 won by x
        return playerX;

    }else if ( (mat[0][0] == playerO ) && (mat[1][1] == playerO ) && (mat[2][2] == playerO) ){
       
        // diagonal-1  \ won by O
        return playerO;

    }else if ( (mat[0][0] == playerX ) && (mat[1][1] == playerX ) && (mat[2][2] == playerX) ){
       
        // diagonal -1  \ won  by x
        return playerX;

    }else if ( (mat[0][2] == playerO ) && (mat[1][1] == playerO ) && (mat[2][0] == playerO) ){
        
        // diagonal 2 / won by O
        return playerO;

    }else if ( (mat[0][2] == playerX ) && (mat[1][1] == playerX ) && (mat[2][0] == playerX)  ){
        
        // diagonal 2 / won by X
        return playerX;

    }
    return 0;
}