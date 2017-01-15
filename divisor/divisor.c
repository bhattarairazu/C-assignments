/*
ALGORITHM
step 1: start
step 2: Read number a
step 3: Initilize i=1,c=0
step 4: if(i>=a) then Goto step 7
step 5: if(a mod i== 0) then
          display c=i
          i=i+1
step 6: Goto step 4
step 7: Display the factor is c
step 8: End

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("\t\tThe divisor of %d is\t\n",a);
    for(i=1;i<=a;i++){
    if(a%i==0){
        printf("%d \n",i);

    }
    }
    return 0;
}
