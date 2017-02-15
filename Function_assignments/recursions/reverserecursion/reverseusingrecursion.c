//WAP in C to display the reverse number using Recursion.

#include <stdio.h>
#include <stdlib.h>
int c=0,b;
int reverse(int a){


if(a>=1){
    b=a%10;
    c=(c*10)+b;
    reverse(a/10);
    }else{
    return c;
    }
    return c;
}

int main()
{
    int i;
    printf("Enter a no\n");
    scanf("%d",&i);
    printf("The reverse is %d,",reverse(i));
    return 0;
}
