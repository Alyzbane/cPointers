#include <stdio.h>

//mixed call
void areaperi ( int r, float *a, float *p );

int main()
{
   int radius ;
 float area, perimeter ;
 printf ( "\nEnter radius of a circle " ) ;
 scanf ( "%d", &radius ) ;

 //take the address of area & perimeter
 areaperi ( radius, &area, &perimeter ) ;
 printf ( "Area = %f", area ) ;
 printf ( "\nPerimeter = %f", perimeter ) ;
}

//returning two outputs in one function
void areaperi ( int r, float *a, float *p )
{
  //declare the value of address area into a, same like p
 *a = 3.14 * r * r ;
 *p = 2 * 3.14 * r ;
}