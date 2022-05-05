#include <stdio.h>
#include <stdlib.h>

typedef struct employees
{
    int salary;
    int bonus;
    float deductions;
}Employee;

float print(Employee M)
{
    float total = (M.salary * M.deductions) + M.bonus ;
    return total;
}

int main()
{
    Employee Mohsen,Maged,Mariam;
    printf("Enter the salary, bonus and deductions for Mohsen : \n");
    scanf(" %d%d%f",&Mohsen.salary,&Mohsen.bonus,&Mohsen.deductions);
    
    printf("Enter the salary, bonus and deductions for Maged : \n");
    scanf(" %d%d%f",&Maged.salary,&Maged.bonus,&Maged.deductions);
  
    printf("Enter the salary, bonus and deductions for Mariam : \n");
    scanf(" %d%d%f",&Mariam.salary,&Mariam.bonus,&Mariam.deductions);
 
    printf("The Total values of Mohsen is %.2f \n",print(Mohsen));
    printf("The Total values of Maged is %.2f \n",print(Maged));
    printf("The Total values of Mariam is %.2f ",print(Mariam));




    return 0;
}