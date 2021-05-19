#include<stdio.h>

int main(){
    int var = 5 ;
    printf("var: %d\n",var);

    // Notice the use & before var
    printf("address of var: %p\n",&var);

    return 0 ;
}