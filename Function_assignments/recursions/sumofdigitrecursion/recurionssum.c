
//WAP to find the sum of digits entered by the user.

#include <stdio.h>
#include <stdlib.h>

int c=0,b;
int sum(int a){
   if(a<=0){

   return 0;
   //b=a%10;
   //c=c+b;
   //sum(a/10);
   }
return ((a%10)+sum(a/10));

}



int main()
{
    int a;
    printf("Enter a digit to finds its sum:\n");
    scanf("%d",&a);
    printf("The sum of digits is:%d\n",sum(a));
    return 0;
}
