#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char s[100];
    fp=fopen("test1.txt","r");
    if(fp==NULL){
        printf("File cannot be created:\n");
        exit(0);
    }
    while(fgets(s,99,fp)!=NULL){
        printf("%s",s);
    }
    fclose(fp);
    return 0;
}
