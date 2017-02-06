
//WAP to input a string and convert it into upper case and vice versa.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    printf("Enter a string:\n");
    gets(string);
    printf("\nThe input string is %s:\n",strupr(string));
    printf("\nThe lowercase string is %s:\n",strlwr(string));
    return 0;
}
