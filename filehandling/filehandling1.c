#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int i;
    char s[]="hello worldd";
    fp=fopen("test.txt","w");
    if(fp==NULL){
            printf("File cannot be created:");
    exit(0);


    }
    for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
    fclose(fp);
    return 0;
}
