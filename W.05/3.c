
#include <stdio.h>
#include <stdlib.h>
int mul(int x[], int y[]) {
    int mul=0;
    for (int i = 0; i < 3; i++)
    {
        mul += x[i]*y[i];
    }
    return mul;
}
int main()
{
    int x[]= {1,2,3};
    int y[]= {4,5,6};
    printf("The scaler multiplication = %d" , mul(x,y));

    return 0;
}

