

#include <stdio.h>

int main()
{    
    float x;
    printf("Enter your grade : ");
    scanf ("%f",&x);
    if (x<=100)
    printf ( (x>=85)? "Excellent!" : (x>=75)? "Very good" : (x>=65) ? "Good" : (x>=50) ? "Acceptence" : "Failed");
    
    else 
    printf ("unvalid entry");
    return 0;
}
