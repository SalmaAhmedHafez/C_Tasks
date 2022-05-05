#include <stdio.h>

int main()
{
    printf("Enter Two Numbers \n");
    int x,y;
    scanf ("%d %d",&x,&y);
    
    printf("x+y = %d\nx-y = %d\nx*y = %d\nx/y = %d\n",x+y ,x-y, x*y, x/y);
    printf("x&&y = %d\nx||y = %d\n!(x>y) = %d\n",x&&y ,x||y,!(x>y));
    printf("x&y = %d\nx|y = %d\nx^y = %d\n",x&y ,x|y,x^y);

    
    return 0;
}
