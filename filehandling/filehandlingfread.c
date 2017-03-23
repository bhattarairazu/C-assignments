
#include <stdio.h>
#include <stdlib.h>
struct books{
         char name[100];
         int id;
         char author[100];
          };

int main()
{
    struct books b1;
    FILE *fp;
    fp=fopen("myfilee.dat","rb");
    if(fp==NULL){
        printf("File cannot be readed:\n");
        exit(0);
    }

   while(fread(&b1,sizeof(b1),1,fp)>0){

    printf("%s %d %s\n",b1.name,b1.id,b1.author);
    }
    fclose(fp);

    return 0;
}
