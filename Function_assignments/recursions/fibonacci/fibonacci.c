
//c program to find the fibonacci series upto n th term using recursion

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
        printf("%d\t",fibonacci(i));



}

    return 0;
}
