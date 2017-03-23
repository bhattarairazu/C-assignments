#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   char s[100];
   fp=fopen("text1.txt","w");
   printf("Please enter your name:\n");
   gets(s);
   fputs(s,fp);
   fclose(fp);
    return 0;
}
