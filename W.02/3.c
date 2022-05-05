

#include <stdio.h>

int main()
{    
    int x;
    printf("Enter your ID : ");
    scanf ("%d",&x);
    printf ( (x==1234)? "Harry" : (x==5678)? "Ron" : (x==1145) ? "Hermione" : "Wrong ID");

    return 0;
}
