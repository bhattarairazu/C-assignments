

//WAP to copy a string from one to another  without using strcpy().



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100],str[100],i=0;
    printf("Enter a string:\n");
    gets(string);
    while(string[i]!='\0')
        {

        str[i]=string[i];
        i++;

        }
        str[i]='\0';
        printf("\nThe copied string withou using strcpy() is %s:\n",str);
    return 0;
}
