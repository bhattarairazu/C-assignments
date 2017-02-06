
//WAP in C to input any 10 numbers in an array and count no. of ODD and EVEN and find out their sum and display them.


#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[10],i,j,eve=0,odd=0,e=0,od=0;
    printf("ENter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++){

        if(a[j]%2==0){
            eve=eve+a[j];
            e=e+1;

        }else{
        odd=odd+a[j];
        od=od+1;
        }

    }
    int total=odd+eve;
    printf("The total no of odd is %d and even is %d\n",od,e);
    printf("\nThe sum of even no is %d and odd is:%d\t\n",eve,odd);
    printf("\nThe total sum of odd and even is %d:\n",total);
return 0;
}
