/*
              ALGORITHM
step 1: start
step 2: Read number a
step 3: Initilize i=2and c=0
step 4: if(i<a/2) then Goto step 5
         else
            Goto step 7
step 5:if(a mod i ==0) then
        c=1
        Goto step 7
step 6:  i=i+1
         Goto step 4
step 7:if(c==0) then
        Display a as prime
        else
            Display a as not prime
step 8: End

*/







#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,i,c=0;
   printf("Enter the number:\n");
   scanf("%d",&a);
   if(a==1){
    printf("%d is neither prime nor composite",a);
   }else{
   for(i=2;i<a/2;i++){
    if(a%i==0){
        c=1;
        break;
        }
    }
    }
    if(c==0){
        printf("\t\t%d is prime number\n",a);
    }else{
    printf("\t\t%d is not prime number\n",a);
    }
    return 0;
}
