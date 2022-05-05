#include <stdio.h>

int main()
{
    printf ("Enter a Number in dollars and cents : ");
    float x;
    scanf ("%f",&x);
    printf ("%.2f", 1.05*x);
    return 0;
}
