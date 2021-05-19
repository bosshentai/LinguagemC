#include <stdio.h>
void test(int *value);

int main()
{
    int m;
    m = 2;

    printf("\nM is %d", m);
    test(&m);

    printf("\nM is %d\n", m);
    return 0;
}

void test(int *value){

   

    printf("\nModifying the value inside memory address %p",&value);

    *value=5;

}