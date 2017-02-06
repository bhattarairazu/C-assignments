//WAP to input and string and find out the length of string using strlen().


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[20];
    int i;
    printf("Enter the string:\n");
    gets(string);
    i=strlen(string);
    printf("\nThe length of %s is %d:\n",string,i);


    return 0;
}
