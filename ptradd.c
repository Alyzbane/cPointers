#include <stdio.h>


int main ()
{
   // * - value at address or indirection operator
   //* - call the value of address
   //& - get address of variable
   

   //reserved a space memory
   int i = 10;
   
   //address of j is an integer
   int *j;

   //declare the address of i into variable j
   j = &i;
   
   printf("i = %d\n*(&i) = %d\n&i = %d\n", i, *(&i), &i);
   printf("*j = %u\n&j = %u\nj = %d", *j, &j, j);

   

   return 0;
}