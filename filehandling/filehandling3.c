#include <stdio.h>
#include <stdlib.h>

int main()
{
     FILE *fp;
    //int i;
    char s;
    //char s[]="hello worldd";
    fp=fopen("testa.txt","r");
    if(fp==NULL){
            printf("File cannot be created:");
    exit(0);


    }
    //printf("Enter your name to write in the file:\n");
    //gets(s);
    //for(i=0;i<strlen(s);i++)
    //fputs(s,fp);
    s=fgetc(fp);
  while(!feof(fp)){
    printf("%c",s);
    s=fgetc(fp);

  }
    fclose(fp);
    return 0;
}
