#include<stdio.h>
void test(int a);

int main(){
    int m;

    m = 2;

    printf("\nM is %d",m);
    test(m);

    printf("\nM is %d\n", m);
    return 0;

}

void test(int a){
    a=5;
}