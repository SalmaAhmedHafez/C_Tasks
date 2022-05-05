#include <stdio.h>
#include <stdlib.h>

typedef struct subjects
{
    int ID;
    int Programming;
    int Data_Structure;
    int Discrete_Math;
    int Algorithms;
}subjects;

typedef enum Bool
{
    False , True
}Bool;


int main()
{
    int id,count = 0;
    Bool val = True;
    subjects student[10]={
    {1000,99,98,97,96},
    {1001,95,94,93,92},
    {1002,91,90,89,88},
    {1003,87,86,85,84},
    {1004,83,82,81,80},
    {1005,79,78,77,76},
    {1006,75,74,73,72},
    {1007,71,70,69,68},
    {1008,67,66,65,64},
    {1009,63,62,61,60}};
    lable:
    printf("Enter student ID : ");
    scanf(" %d",&id);
    for(int i=0; i<10; i++)
    {
        count++;
        if(id == student[i].ID)
        {
            printf("Programming : %d\n",student[i].Programming);
            printf("Data Structures : %d\n",student[i].Data_Structure);
            printf("Discrete Maths : %d\n",student[i].Discrete_Math);
            printf("Algorithms : %d\n",student[i].Algorithms);

        }
        if(count == 10)
        {
            printf("wrong ID\n");
            goto lable;
        }
    }
    return 0;
}