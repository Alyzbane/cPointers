#include <stdio.h>

int swapv(int x, int y);

int main()
{
   //call by value 
   
   int a = 1, b = 2;

   swapv(a, b);
   printf("\n%d %d", a, b);

   return 0;
}

int swapv(int x, int y)
{
   int n;

   n = x;
   x = y;
   y = n;

   printf("%d %d", x, y);
}