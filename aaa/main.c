#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int roll_dice(void);
enum Status{ CONTINUE, WON, LOST};
int main()
{
    srand(time(NULL));

    enum Status gameStatus;
 int a;
 int point;
a =roll_dice();
printf("the sum is %d\n",a);
switch(a){

            case 7:
            case 11:
            gameStatus = WON;
            break;
           case 2:
            case 3:
             case 12:
            gameStatus = LOST;
            break;
                case 4:
                case 5:
                case 6:
                case 8:
                case 9:
                case 10:
            gameStatus = CONTINUE;
            break;
}
printf("the status is %d\n",gameStatus);
while( gameStatus == CONTINUE ){
        point =roll_dice();
         if (a==point){
      gameStatus = WON;
    }
    if (point==7){
      gameStatus = LOST;
    }
printf("the sum is %d\n",a);
printf("the status is %d\n",gameStatus);
}

return 0;
}




int roll_dice(void){
        int x,y,z;
x=(rand()%6)+1;
printf("the x is %d\n",x);
y=(rand()%6)+1;
printf("the y is %d\n",y);
z=x+y;


return  z ;
}



