

#include <stdio.h>

int main()
{    
    int x,y,z;
    printf("Enter three numbers : \n");
    scanf ("%d %d %d",&x, &y, &z);
    
    if (x>=y && x>=z)
    printf ("The max is : %d",x);
    
    else if (y>=x && y>=z)
    printf ("The max is : %d",y);
    
    else 
    printf ("The max is : %d",z);
    return 0;
}
