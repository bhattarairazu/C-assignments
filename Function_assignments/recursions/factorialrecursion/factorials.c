
//Write a program in C to find factorial of a given number using Recursive Function

#include <stdio.h>
#include <stdlib.h>

int factorial(int a){
    if(a==0){

        return 1;
    }
    return a*factorial(a-1);



}


int main()
{
    int a;
    printf("Enter a no to find the factorial:\n");
    scanf("%d",&a);
    printf("The factorial of  %d \n",factorial(a));
    return 0;
}
