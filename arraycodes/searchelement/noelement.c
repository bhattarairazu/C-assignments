//WAP to
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j,b,c=0;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
            scanf("%d",&a[i]);

    }
    printf("Enter a no.to search:\n");
    scanf("%d",&b);

    for(j=0;j<10;j++){

        if(a[j]==b){
            c++;
        }

    }
    if(!c==0){
    printf("There are %d element in an array:\t\n",c);
    }else{
    printf("There are no any element in an array:\n");
    }
    return 0;
}
