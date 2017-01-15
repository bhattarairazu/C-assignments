/*
           ALGORITHM
step 1:start
step 2: Read number a
step 3: Initilize i=1 and f=1
step 4: if(i<=a):Goto step 6
            i=i+1
            f=f*i
 step 5: Goto step 4
 step 6: Display f as factorial
 step 7: End
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,f=1;
    printf("Enter a number:\n");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        f=f*i;

    }
    printf("\t\tThe factorial of %d! is %d\n",a,f);

    return 0;
}
