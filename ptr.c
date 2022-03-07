#include <stdio.h>

int main()
{
   //%u - unsigned integer
   //&i - address of unsigned int
   int i = 1;
   printf("%d\n", i++); //1 -> 2
   printf("%u\n", &i); //address of i
   printf("%d\n", ++i); //3
   printf("%u\n", &i); //same address
   printf("%d\n", i); //3
   printf("%u\n", &i); //same
   return 0;
}