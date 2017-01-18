#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,c=0;
    printf("The prime number from 1 to 50 is:\n");
    for(i=2;i<=50;i++){
        for(j=2;j<i;j++){
            if(i%j==0){

                c=1;
                break;
            }else{
            c=0;

            }

        }
        if(c==0){
        printf("%d\t",i);
    }
    }
    return 0;
}
