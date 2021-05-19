#include <stdio.h>
#include <stdlib.h>

float reaj(int cargo);
float reajSalary(float salary, float perc);
float updateSalary(float salary, float reajSalary);
void resultado();

void main()
{
    resultado();
}

float reaj(int cargo)
{

    if (cargo == 1)
    {
        return (float) 7 / 100;
    }
    if (cargo == 2)
    {
        return (float) 9 / 100;
    }
    if (cargo == 3)
    {
        return (float) 5 / 100;
    }
    if (cargo == 4)
    {
        return (float) 12 / 100;
    }

    return 0;
}

float reajSalary(float salary, float perc)
{
    return salary * perc;
}

float updateSalary(float salary, float amount)
{
    return salary + amount;
}

void resultado()
{
    int cargo;
    float salary, amountadd, newSalary, perc;
    printf("informe o cargo do funcionario:");
    scanf("%d", &cargo);
    perc = reaj(cargo);
    if (cargo > 0 && cargo < 5)
    {
        printf("Informe o salario atual:");
        scanf("%f", &salary);
        amountadd = reajSalary(salary, perc);
        newSalary = updateSalary(salary, amountadd);
        printf("O reajust e: %.2f . O novo salario e: %.2f \n", amountadd, newSalary);
    }
}
