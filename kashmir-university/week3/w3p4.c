/*
    Date : 07-03-2021
    Author : Kaiser Sakhi
    Environment : WSL Kali Linux
*/

/*
Write a program which will arrange the positive and negative numbers in a one-dimensional
array in such a way that all positive numbers should come first and then all the negative numbers will
come without changing original sequence of the numbers
*/

#include<stdio.h>
void withoutOrder();
void keepOrder();
void swap(int*, int*);

int size = 10;
int i = 0;
int temp = 0;
int arr[] = { 10,-15,1,3,-2,0,-2,-3,2,-9};

int main(){
  
    keepOrder();
    for (i = 0 ; i < size; ++i){
        printf("%i,", arr[i]);
    }
    
    return 0;
}


void keepOrder(){
    int j = size -1;
    int k = i;

    for (k ; k < size; ++k){
        for (i = 0; i < size - 1; ++i){
            if (arr[i] < 0 && arr[i+1] >= 0){
                swap(&i[arr], &(i+1)[arr]);
            }
        }
    }

}

void swap(int *a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void withoutOrder(){
     int j = size -1;

    while(i < j-1) {
        while(arr[i] > 0){
            i++;
        }
        while(arr[j] < 0){
            j--;
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
}