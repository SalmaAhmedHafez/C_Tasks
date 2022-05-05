

#include <stdio.h>
#include <stdlib.h>
int Get_Max(int x,int y);

int main()
{
    int x,y;
    printf("Enter Two Numbers : \n");
    scanf("%d %d",&x,&y);
    printf ("The max = %d",Get_Max(x,y));
    
    return 0;
}

int Get_Max(int x,int y)
{
    return (x>y) ? x : y;
    
}