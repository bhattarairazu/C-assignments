
//WAP to find transpose of a given Matrix



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,b;
    printf("Enter rows of an array:\n");
    scanf("%d",&a);

    printf("Enter columns of an array:\n");
    scanf("%d",&b);

    int c[a][b];
    printf("Enter values in an array:\n");
    for(i=0;i<a;i++){

        for(j=0;j<b;j++){
            scanf("%d",&c[i][j]);
        }
    }
    printf("The tranpose of above matrix is:\n");

    for(i=0;i<b;i++){

        for(j=0;j<a;j++){
            printf("%d\t",c[j][i]);
        }
        printf("\n");
    }
    return 0;
}
