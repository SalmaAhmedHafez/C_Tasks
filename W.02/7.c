

#include <stdio.h>

int main()
{    
    int x, sum=0; 
    printf("Enter 10 numbers :\n");
    for (int i=0; i<10; i++)
    {
        scanf ("%d",&x);
        sum+=x;
    }
    printf ("The sum = %d\n",sum);
    printf ("The average %.2f= ",sum/10.0);

    return 0;
}
