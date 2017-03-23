#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   int a,b,c;
   fp=fopen("test.txt","r");
   if(fp==NULL){
        printf("File do no exti:\n");

    exit(0);

   }
   fscanf(fp,"%d%d%d",&a,&b,&c);
   printf("%d %d %d",a,b,c);
   fclose(fp);

    return 0;
}
