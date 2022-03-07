#include <stdio.h>

int swapv(int *x, int *y);

int main()
{
   //call by reference
   
   int a = 1, b = 2;

   swapv(&a, &b);
   printf("%d %d", a, b);

   return 0;
}
  
int swapv(int *x, int *y)
{
   int n;

   n = *x;
   *x = *y;
   *y = n;
}