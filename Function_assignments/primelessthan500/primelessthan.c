
//WAP in C to print all prime number less than 500 using function

#include <stdio.h>
#include <stdlib.h>
void prime(){

int a,b=0,i,j;
    for(j=2;j<=500;j++){
            for(i=2;i<j;i++){
                    if(j%i==0){
                     b=1;
                     break;
                    }else{
                    b=0;
                    }


            }

       if(b==0){
        printf("%d\t",j);
       }
    }



}
int main()
{
    printf("The prime no less than 500 is:\n");

    prime();
    return 0;
}
