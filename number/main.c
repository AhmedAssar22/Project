#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n, x, y, z, v, b; //define values
      int digit = 0;

  printf( "Enter one 5 digit number: \n" );
  scanf( "%d", &n );
// reminder for values
  x = n / 10000;
  y = n / 1000 % 10;
  z = n / 100 % 10;
  v = n / 10 % 10;
  b = n % 10;
//compare values
  if ( x == b && y == v ) {
    printf( "Palindrome!\n" );
  }

  if ( x != b || y != v ) {
    printf( "Not a palindrome.. :(\n" );//out put sentence
  }
    return 0;
}
