//WAP TO FIND THE GREATEST NUMBER AMONG THREE NUMBER
/*
            ALGORITHM
step 1: start
step 2: Read three number a,b,c
step 3: if(a>b and a>c) then
         Display a as greatest number
          else if (b>a and b>c)
            Display b as greatest number
            else
            display c as greatest number
step 4:End
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("Enter third number:\n");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("\t\t%d is the greatest numebr\n",a);

    }else if(b>a && b>c){
        printf("\t\t%d is the greatest number\n",b);


    }else{
    printf("\t\t%d is the greates number\n",c);
    }
    return 0;
}
