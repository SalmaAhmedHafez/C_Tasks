#include<stdio.h>
#include<stdlib.h>
void fun(int arr[5])
{
  int i, j;
  printf("\nThe Repeating elements are ");
  for(i = 0; i<4; i++)
  {
    for(j = i+1; j<5; j++)
    {
      if(arr[i] == arr[j])
      {
          printf("%d ", arr[i]);
      }
    }
  }
}

int main()
{
  int arr[10];
  int i,j;
  printf("Enter 5 elements\n");
  for(i=0; i<5; i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0; i<5; i++)
  {
      printf("%d\n",arr[i]);
  }
  fun(arr);
  return 0;
}