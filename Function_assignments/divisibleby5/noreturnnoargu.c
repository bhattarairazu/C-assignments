
//no arguments and no return values

#include <stdio.h>
#include <stdlib.h>
void divisible();
int main()
{
    divisible();


    return 0;
}
void divisible(){
int a,b=0;
printf("Enter a no to check wether it is divisible by 5 and 11:\n");
scanf("%d",&a);
if(a%5==0 && a%11==0){

    printf("It is divisible by 5 and 11:\n");
    }else{
    printf("It is not divisible by 5 and 11:\n");
    }


}
