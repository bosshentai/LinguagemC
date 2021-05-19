#include <stdio.h>

/* use function prototypes*/
int sayhello(int count);


int main(){
    sayhello(4);

    return 0 ;
}


int sayhello(int count){
   
    for(int c = 0;c< count; c++){
        printf("Hello\n");
       
    }
}