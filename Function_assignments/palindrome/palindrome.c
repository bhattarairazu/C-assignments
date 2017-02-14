#include <stdio.h>
#include <stdlib.h>


int palindrome(int a){
int c,d=0;

    while(a!=0){
            c=a%10;
            d=d*10+c;
            a=a/10;


    }
    return d;
}


int main()
{
    int a,e;
    printf("Enter no to check wether it is palindrome or not:\n");
    scanf("%d",&a);
    e=a;
    int c=palindrome(a);

    if(c==e){
            printf("It is palindrome");


    }else{
    printf("It is not palindrome");
    }
return 0;
}

