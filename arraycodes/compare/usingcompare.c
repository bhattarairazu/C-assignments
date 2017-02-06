
//WAP to compare two string using strcmp() .


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100],str[100];
    printf("Enter 1st string:\n");
    gets(string);
    printf("Enter 2nd string:\n");
    gets(str);

    int i,j,k;
    i=strcmp(string,str);

    if(i==0){
        printf("The two input string are same:\n");
    }else{
    printf("The two input string are different:\n");
    }
    return 0;
}
