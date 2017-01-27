//WAP to input 10 number and find even and odd .Add even and odd number seperately and display it.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j,eve=0,odd=0;
    printf("ENter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++){

        if(a[j]%2==0){
            eve=eve+a[j];

        }else{
        odd=odd+a[j];
        }

    }
    printf("\nThe sum of even no is %d and odd is:%d\t\n",eve,odd);

    return 0;
}
