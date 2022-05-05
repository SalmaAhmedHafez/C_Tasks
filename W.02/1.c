

#include <stdio.h>

int main()
{ 
    int x ; float salary;
    printf("Enter your working hours \n");
    scanf ("%d",&x);
    printf("Enter your usual salary \n");
    scanf ("%f",&salary);
    if (x<=50)
    {
      if (x<40)
      printf ("Your salary is : %.2f",0.9*salary);
      else
      printf ("Your salary is : %.2f",salary); 
    }
    else 
      printf ("unvalid entry"); 


    return 0;
}
