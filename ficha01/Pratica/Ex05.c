#include <stdio.h>
#include <stdlib.h>


float updateSalary(float currentSalary, float readjustment){
    return currentSalary + (currentSalary * readjustment/100);

}

void main(){
    /**
     * Program salary adjustment 
     *  input  current salary 
     *  input  percentual readjustment 
     * function updateSalary parans currentSalary and readjustment 
     *  return updated the salary 
     */

    float currentSalary, readjustment;
    float result;
    

    printf("Insira o salario atual do funcionario: \n");
    scanf("%f", &currentSalary);

    printf("Insira o percentual de reajuste : \n");
    scanf("%f", &readjustment);

    result = updateSalary(currentSalary,readjustment);

    printf("O salario atual e %.2f \n",result);

}