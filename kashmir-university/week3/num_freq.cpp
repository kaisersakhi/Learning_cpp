/*
    Author : KaiserSakhi
    Date : 01-06-2021
    Environment : WSL KaliLinux
*/

#include<iostream>
#include<stdio.h>
int main(){
    using namespace std;

    int arr[100];
    int q;
    

    for (int i = 0; i < 100 ; ++i){
        arr[i] = 0;
    }

    cout<<"Enter -1 to exit loop!\n";

    while (1){
        cout<<"Enter Any No. : ";
        cin>>q;
        cout<<"\n";
        if (q == -1)
            break;

        ++arr[q];
    }
    
    for (int i = 0; i < 100 ; ++i){

        if (arr[i] > 0){
            
            printf("%d is %d Times.\n", i , arr[i]);
        }
        
    }

    return 0;

}