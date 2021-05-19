#include<stdio.h>
int min(int a, int b);

int main(){
    int m;
    m= min(3,6);
    printf("Minnimm is %d\n", m);

    return 0 ;
}


int min(int a, int b){
    if (a<b){
        return a;
    }else{
        return b;
    }
}