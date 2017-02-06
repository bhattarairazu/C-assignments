
//WAP to input any 5 elements in an array and print them in reverse order too.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[5];

    printf("Enter any five number:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
     printf("\nthe array in reverse order is:\n");
     for(j=4;j>=0;j--){
        printf("%d",a[j]);
     }
    return 0;
}
