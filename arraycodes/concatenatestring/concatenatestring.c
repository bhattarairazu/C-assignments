
//WAP to concatenate two string using strcat()).



#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[100],target[200];

    printf("Enter 1st string:\n");
    gets(source);
    printf("Enter 2nd string:\n");
    gets(target);
    //strcat(target,source);
strcat(source,target);

    printf("\nThe string after concatenate is %s:\n",source);
    return 0;
}
