

#include <stdio.h>

int main()
{
    int x, i=0;
    printf("Enter a number : ");
    scanf ("%d",&x);
    while (x!=0)
    {
        x/=10;
        i++;
    }
    printf("Number of digits = %d",i);
    
    return 0;
}
