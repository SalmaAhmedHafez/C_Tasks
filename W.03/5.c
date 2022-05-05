

#include <stdio.h>
#include <stdlib.h>
char user[20] , pass[20];
int main()
{
    printf ("User name : ");
    scanf ("%s",&user);
    
    printf ("Password : ");
    scanf ("%s",&pass); 
    login(user, pass);
    return 0;
}
void login(char user[20] , char pass[20])
{
    int result1 = strcmp(user , "salma");
    int result2 = strcmp(pass , "11111");
    printf ( (result1 == 0 && result2==0) ? " Login..." : "username or password is not correct ");
   
}
