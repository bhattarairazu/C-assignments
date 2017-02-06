

//WAP to copy a string from one to another using strcpy() .

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char string[]="kathmandu";
    char str[20];
    strcpy(str,string);
    printf("\n\nsoucre string = %s:\n",string);
    printf("\ncopied string = %s:\n",str);


    return 0;
}
