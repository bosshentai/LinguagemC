#include<stdio.h>
#include<stdlib.h>


// autor: Hernâni Baptista n 4933

void main(){
	
	int num, soma=0;
	printf("Insira numero: \n");
	scanf("%d", &num);
	
	while(num>0){
		//obter o resto da divisao
		soma += num%10;
		//dividir o numero para decrementar o numero da casa das unidades para a n-esima casa
		num=num/10;
	}
	printf("%d\n", soma);
}

