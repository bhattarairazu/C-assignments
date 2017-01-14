//WAP TO FIND THE SUM OF TWO NUMBERS
/*
                 ALGORITHM
 step 1: Start
 step 2: Read two number a and b
 step 3:Initialize sum=0
 step 4: Add two numbers and stored in sum
               sum=a+b;
 step 5:Display sum
 step 6:End

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("\t\tThe sum of two number is:%d\n",sum);

    return 0;
}
