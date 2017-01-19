#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,j,c=0,a;
    printf("Enter a number to find prime number upto n:\n");
    scanf("%d",&a);
    printf("The prime number from 1 to n is:\n");
    while(i<=a){//for(i=2;i<=50;i++){
       j=2;
       while(j<i){ //for(j=2;j<i;j++){
            if(i%j==0){

                c=1;
                break;
            }else{
            c=0;

            }
         j++;
        }
        if(c==0){
        printf("%d\t",i);
    }
    i++;
    }
    return 0;
}
