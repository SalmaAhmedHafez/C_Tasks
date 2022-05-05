#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5];
    int i,j,sum=0;
    printf("Enter the elements of 5*5 array \n");
    for(i=0; i<5; i++)
    {
       for(j=0; j<5; j++)
       {
           scanf("%d ",&arr[i][j]);
       }
    }
    
    for(i=0; i<5; i++)
    {
       for(j=0; j<5; j++)
       {
           sum += arr[i][j];
       }
       printf("sum of row %d = %d\n",i,sum);
       sum = 0;
    }

     for(i=0; i<5; i++)
    {
       for(j=0; j<5; j++)
       {
           sum += arr[j][i];
       }
       printf("sum of column %d = %d\n",j,sum);
       sum = 0;
    }

    return 0;
}