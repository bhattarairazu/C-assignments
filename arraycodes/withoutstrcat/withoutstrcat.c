
//WAP to concatenate two string  without using strcat().


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[200],target[100];
    int a;
    printf("ENter a 1st string:\n");
    gets(source);
    printf("Enter 2nd string:\n");
    gets(target);
    int i= strlen(source);
    int j=strlen(target);
    int k=i+j;
    for(a=0;a<k;a++){
            source[i+a]=target[a];

    }
    //source[];
    printf("The string after concatenate without using strcat() is:%s\n",source);


    return 0;
}
