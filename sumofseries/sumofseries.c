
/*  ALGORITHM
  Step 1: Start
  step 2: Read number a
  step 3:Initilize i=1 and sum=0
  step 4:if(i>=a):Goto step 8
  step 5:sum=sum+i
  step 6:i=i+1
  step 7: Goto step 4
  step 8:Display sum
  step 9:End
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0,i;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum=sum+i;

    }
    printf("\t\tThe sum of series 1+2+3+...+%d is %d\n",a,sum);
    return 0;
}
