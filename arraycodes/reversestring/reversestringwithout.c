

//WAP to reverse a string without using strrev().


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100],str[100],c;
    printf("Enter a string:\n");
    gets(string);
    int j=strlen(string);
    int a;
        for(a=0;a<j;a++){
          c=string[a];
          string[a]=string[j-1];
          string[j-1]=c;
          j--;
    }

    printf("the reverse string without strrev() is %s:\n",string);


    return 0;
}
