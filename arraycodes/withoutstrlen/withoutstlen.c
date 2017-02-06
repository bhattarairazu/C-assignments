
//WAP to input and string and find out the length of string without using strlen().

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[200];
    printf("Enter the string:\n");
    gets(string);
    int i=0,l=0;

    while(string[i]!='\0'){

       l++;
    }
    printf("The length of %s is %d:\n",string,l);
    return 0;
}

