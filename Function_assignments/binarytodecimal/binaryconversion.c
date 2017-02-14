
//WAP in C to convert decimal number to binary using functions

#include <stdio.h>
#include <stdlib.h>
long binary(int a){
int b;
long bin=0,i=1;
while(a!=0){
        b=a%2;
        bin=bin+(b*i);
        a=a/2;
        i=i*10;

    }
return bin;
}



int main()
{
    int a;


    printf("Enter any decimal no to convert in binary:\n");
    scanf("%d",&a);
    long c=binary(a);
    printf("The binary form is:");
    printf("%d",c);
    return 0;
}
