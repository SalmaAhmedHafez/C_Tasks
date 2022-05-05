

#include <stdio.h>

int main()
{    
    int x,y;
    printf("Enter  : ");
    scanf ("%d",&x);
    
      if(x==1000)
    {
      A : for (int i=0; i<3 ;i++)
      {
              printf("Enter your Password : ");
              scanf ("%d",&y);
              if (y==1111)
              {
                  goto Welcome;
              }
              else
                 printf ("You are not registered\n");
      }
                 printf ("No more tries");
    }
         else 
         printf("incorrect ID);
         
         Welcome :
         printf("Welcome");
      
        return 0;
}
