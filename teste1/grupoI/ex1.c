#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Hernani Baptista n4399

#define TAMANHO(x) (sizeof(x)/ sizeof((x)[0]))

int search(const int V[], int j , int key);


void main(){
    int vector[] = {20, 6, 4, 3, 43, 15};

    int result = search(vector,TAMANHO(vector),16);

    printf("%d", result);
}



int search(const int V[], int j,int key){

    const int *v_p = V;

    

    for(int i = 0 ; i < j; i++){
        if(*(v_p+i) == key){
            return 1;
        }
       
    }

    return 0;
}