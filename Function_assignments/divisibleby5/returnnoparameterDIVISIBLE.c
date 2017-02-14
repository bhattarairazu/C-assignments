

// program to check divisible by 5 and 11 or not using(no argument and return value )


#include <stdio.h>
#include <stdlib.h>
int divisible();
int main()
{
    int c=divisible();
    if(c==0){

       printf("It is not divisible by 5 and 11:\n");

    }else{
    printf("It is divisible by 5 and 11:\n");
    }
    return 0;
}
int divisible(){
int a,b=0;
printf("Enter a no to check wether it is divisible by 5 and 11:\n");
scanf("%d",&a);
if(a%5==0 && a%11==0){

    b=1;
    }
    return b;
    }




