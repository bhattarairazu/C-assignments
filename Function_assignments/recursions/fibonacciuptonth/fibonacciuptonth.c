

//A recursive function to generate the particular term in Fibonacci Series. ( eg. 8th term: 13).

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int a){
    if(a==0){
        return a;
    }else if(a==1){
        return a;

    }
  return (fibonacci(a-1)+fibonacci(a-2));


}

int main()
{
int d,b=0,c=1,i;
printf("Enter a nth term of fibonaci series;\n");
scanf("%d",&d);
for(i=0;i<=d;i++){
    fibonacci(i);



}
printf("The %d term of fibonacci is:%d\n",d,fibonacci(d-1));

    return 0;
}
