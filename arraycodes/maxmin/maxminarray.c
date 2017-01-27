
//WAP to enter 10 number using array and find maximum and minimum numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j,temp=0;
    printf("Enter 10 numbers :\n");
    for(i=0;i<10;i++){

        scanf("%d",&a[i]);
    }

    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
                if(a[i]>a[j]){
                    temp = a[i];
                    a[i]=a[j];
                    a[j]=temp;

                    }
                }
             }

//for(i=0;i<10;i++){
    //printf("%d\t",a[i]);
//}
        printf("\nThe maximum no is %d and minimum is %d\n",a[9],a[0]);

    return 0;
}
