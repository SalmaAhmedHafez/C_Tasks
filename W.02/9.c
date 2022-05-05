

#include <stdio.h>

int main()
{    
    int x,f=1;
    printf("Enter a number : ");
    scanf ("%d",&x);
    
    while(x>=1)
    {
        f*=x;
        x--;
    }
    printf ("The factorial = %d",f);
    return 0;
}
