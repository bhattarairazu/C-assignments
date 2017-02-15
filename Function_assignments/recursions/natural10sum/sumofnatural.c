
//WAP to find the sum of Natural number up to 10 using recursion.


#include <stdio.h>
#include <stdlib.h>
//int sum=0;
int natural(int a){
//sum=sum+a;

if(a<=10){
  return a+natural(a+1);
}else{
    return 0;
}
//

}

int main()
{
    int i=1;
    printf("The sum of natural no from 1 to 10 is:%d\n",natural(i));
    return 0;
}
