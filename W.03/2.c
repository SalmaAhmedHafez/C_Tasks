

#include <stdio.h>
#include <stdlib.h>
int swap(int x,int y);

int main()
{
    int x,y;
    printf("Enter Two Numbers : \n");
    scanf("%d %d",&x,&y);
    swap (x,y);
    
    return 0;
}

int swap(int x,int y)
{
    int z=x;
    x=y;
    y=z;
    printf ("After Swap :\n%d\n%d",x,y);
}