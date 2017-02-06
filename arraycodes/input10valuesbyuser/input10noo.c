
//.WAP to input any 10 number by user and display them.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j;
    printf("Enter any 10 number:\n");
    for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    }

    printf("The input 10 numbers are:\n");
    for(j=0;j<10;j++){
        printf("%d\t",a[j]);
    }
    return 0;
}
