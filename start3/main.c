#include <stdio.h>
#include <stdlib.h>

int main()
{

         for(int i=1;i<=9;i++){
puts("");
         for(int j=9;j>=1;j--){
         	if (i<j){
         		printf(" ");
         	}

            else if (i>=j)
          {

          printf("%s","*") ;
             }

         }}
    return 0;
}
