#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a;
    printf("Enter a number to find multiplication table of:\n");
    scanf("%d",&a);
    printf("The multiplcication table of %d is :\n",a);
    for(i=1;i<=10;i++){
        j=a*i;
        printf("\t\t\t%d*%d=%d\n",a,i,j);
    }

    return 0;
}
