#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   char s[100];
   int i;
   fp=fopen("test.txt","r+");
   if(fp==NULL){
        printf("File is empty:\n");
   exit(0);
   }

   fseek(fp,8,SEEK_SET);
   fputs("c programming",fp);
   rewind(fp);
   fgets(s,99,fp);
   printf("%s",s);
   fclose(fp);
    return 0;
}
