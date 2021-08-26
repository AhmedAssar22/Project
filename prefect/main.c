#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,x;
    for (int number =1;number<=1000;number++){
     x=   prfect(number);

    }
printf("prfect number %d \n",x);
    return 0;
}
int prfect (int number){
int j=0;
for (int i=1;i<number;i++){
    if (number%i==0){
        j+=1;
    }
    if(number==j){
     printf("prfect number is \n%d",number);
     for (int i=1;i,number;i++){
      if (number%i==0){
        printf("number%d\n",i);

      }
     }
    }
}
return prfect;
}
