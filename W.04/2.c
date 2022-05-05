#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int sort;
    printf("enter 5 elements\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
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
        
    printf("The second largest element =  %d",arr[3]);
    return 0;
}