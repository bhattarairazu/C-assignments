#include <stdio.h>
#include <stdlib.h>
//int c=b;

void power(){
    int b,a,c=1;
    printf("Enter a no. and power of it's.\n");
    scanf("%d%d",&a,&b);
    while(b!=0){
    c=c*a;
    b--;
    }
printf("The power is%d  is %d",a,c);


//return c;
}

int main()
{

    //printf("The power is%d^%d is %d",power());
power();
    return 0;
}
