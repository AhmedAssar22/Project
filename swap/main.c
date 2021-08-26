#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;//defen value
    printf("enter first number \n");//print the first number
    scanf("%d",&x);//input first  number
    printf("enter second number \n");//print second number
    scanf("%d",&y);//input second number
    z=x;//swap x in z
    x=y;//swap x in y
    y=z;//swap y in z
    printf("the swaping is:%d",z);//print sentence
    return 0;
}
