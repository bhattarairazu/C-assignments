//WAP TO FIND WHETHER A INPUT NUMBER IS POSITIVE OR NEGATIVE OR ZERO
/*
              ALGORITHM
steo 1:start
step 2:Read number a
step 3:if(a>0)
        display a as positive
        else if(a<0)
            display a as negative
            else
            display a as zero
 step 4: End
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a>0){
        printf("\t\t%d is positive number\n",a);
    }else if(a<0){
    printf("\t\t%d is negative numer\n",a);
    }else{
    printf("\t\tIt is 0\n");
    }
    return 0;
}
