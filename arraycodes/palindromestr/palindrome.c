//WAP to check if the input string is palindrome or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    int i,j,len,c=0;
    printf("Enter the string to check palindrome:\n");
    gets(string);
    len=strlen(string);
    for(i=0;i<len;i++){
        if(string[i]==string[len-i-1]){

            c++;

        }

    }
    if(c==len){
        printf("\nThe String is palindrome\n");
    }else{
    printf("\nThe string is not palindrome\n");
    }
    return 0;
}
