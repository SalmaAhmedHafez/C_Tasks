#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    printf("enter 5 elements\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i; j++)
        {
            if (i==j)
            break; 
            
            if(arr[i]==arr[j])
            printf("Unique elements are : \n%d ",arr[i]);
    }
    }
    return 0;
}