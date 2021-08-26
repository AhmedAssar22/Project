#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a ,i,small=0 ;
    printf("enter a num of number \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter of number \n");
    scanf("%d",&a);
    if (a<=small){
     small=a;
    }

    }
    printf("the smallest of number %d : \n",small);
    return 0;
}
