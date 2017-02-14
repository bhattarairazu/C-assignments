
//WAP in C to print print TWIN PRIME less than 500 using function. [if two consecutive odd numbers are both prime then they are known as twin prime].

#include <stdio.h>
#include <stdlib.h>

void prime(){
int a,b=0,i,j,c=2;
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
        //printf("%d\t",j);
        if(j-c==2){

            printf("(%d,%d),",c,j);
        }

        c=j;
       }

    }


}
int main()
{

printf("The twin prime no. less than 500 is:\n\n");
prime();


 return 0;
}
