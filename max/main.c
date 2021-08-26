#include <stdio.h>
#include <stdlib.h>

int main()
{
      int counter = 0, number = 0, max = 0;//define values
// loop for input number and compare input values
  while ( counter < 10 ) {
    printf( "Enter a number: \n" );
    scanf( "%d", &number );
    if ( number >= max ) {
      max = number;
    }
    counter++;
  }
  printf( "The largest number is %d\n", max );//print max value
    return 0;
}
