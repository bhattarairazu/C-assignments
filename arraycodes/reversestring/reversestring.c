

//WAP to reverse a string using strrev().


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    printf("Enter a string:\n");
    gets(string);
    printf("\nthe reverse is %s:\n",strrev(string));
    return 0;
}
