
//Write a program to read a string and search a specified word in given string

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100],c;
    printf("Enter a string:\n");
    gets(string);
    printf("Enter a word to serch:\n");
    scanf("%c",&c);
    int i,d=0;
    for(i=0;i<strlen(string);i++){
            if(string[i]==c){
                d++;

            }
    }
    if(d==0){
    printf("Ther are no any words in string:\n");
    }else{
    printf("There are %d words in string:\n",d);
    }

    return 0;
}
