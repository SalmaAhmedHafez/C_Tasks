#include <stdio.h>
#include <stdlib.h>

int main()
{
    int order,sort;
    int arr[5];
    printf("Enter 5 elements :\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter 0 for sorting the elements in ascending order or 1 for descending order\n");
    scanf("%d",&order);
    switch(order)
    {
         case 0:
             for(int i=0; i<5; i++)
             {
                 for(int j=i+1; j<5; j++)
                 {
                     if(arr[i]>arr[j])
                     {
                         sort = arr[i];
                         arr[i] = arr[j];
                         arr[j]=sort;
                     }
                 }
             }
             for(int i=0; i<5; i++)
             {
                 printf("%d \t",arr[i]);
             }
             break;
         case 1:
            for(int i=0; i<5; i++)
             {
                 for(int j=i+1; j<5; j++)
                 {
                     if(arr[i]<arr[j])
                     {
                         sort = arr[i];
                         arr[i] = arr[j];
                         arr[j]=sort;
                     }
                 }
             }
             for(int i=0; i<5; i++)
             {
                 printf("%d \t",arr[i]);
             }
             break;

         default:
              printf("Enter 0 or 1 only");
              break;
    }
    return 0;
}