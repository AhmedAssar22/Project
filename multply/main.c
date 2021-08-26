#include <stdio.h>
#include <stdlib.h>

int multiple( int, int );



 int main()

 {

   int x, y;

   for ( int i = 1; i <= 3; ++i ) {

      printf("Enter two integers: \n");

       scanf("%d%d",&x,&y);

          if ( multiple( x, y ) )

          printf("is a multiple of %d \n",x,y );

       else

          printf("is not a multiple of %d \n",x,y );

    }



    return 0;

 }
int multiple( int a, int b )

 {

    return !( b % a );

 }
