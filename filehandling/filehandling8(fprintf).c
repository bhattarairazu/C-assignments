#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *p;
   int a,b;
   p=fopen("test1.txt","w");
   printf("Enter value of a and b:\n");
   scanf("%d%d",&a,&b);
   fprintf(p,"sum of %d and %d is %d:\n",a,b,a+b);
   fclose(p);
    return 0;
}
