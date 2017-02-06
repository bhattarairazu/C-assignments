#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j;
    for(i=0;i<10;i++){
        a[i]=i+2;
    }

    printf("The initilize value are:\n");
    for(j=0;j<=9;j++){
        printf("%d\t",a[j]);
    }
  return 0;
}
