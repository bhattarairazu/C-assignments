// WAP TO FIND WEHTER A INPUT NUMBER IS EVEN OR ODD
/*
step 1: start
step 2: Read number a
step 3: if(a mod 2== 0) then
        Display a as even
        else
        Display a as odd
step 4: End

*/





#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("\t\t%d is even number\n",a);
    }else{
    printf("\t\t%d is odd number\n",a);
    }
    return 0;
}
