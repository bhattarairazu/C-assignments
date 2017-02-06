

//WAP a program to read two arrays and merge these two arrays into third array.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,b;
    printf("Enter no of elements in 1st array.\n");
    scanf("%d",&a);
    char c[a];
    printf("Enter element of array 1:\n");
        for(i=0;i<a;i++){
        scanf("%d",&c[i]);
        }

        printf("Enter no of elements in 2st array.\n");
    scanf("%d",&b);

    char d[b];

    int f=a+b;

    //char e[f];

    printf("Enter element of 2nd array:\n");

    for(j=0;j<b;j++){
        scanf("%d",&d[j]);
        }

        for(i=0;i<f;i++){
            c[a+i]=d[i];

        }
        printf("The merged array is:\n");
        for(j=0;j<f;j++){
            printf("%d\t",c[j]);
        }


    return 0;
}
