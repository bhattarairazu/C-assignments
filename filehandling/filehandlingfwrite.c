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
    fp=fopen("myfilee.dat","wb");
    printf("Enter books name ,id and author:\n");
    gets(b1.name);
    scanf("%d",&b1.id);
    fflush(stdin);
    gets(b1.author);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);

    return 0;
}
