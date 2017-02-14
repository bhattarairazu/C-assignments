#include<stdio.h>
#include<conio.h>
void divisor(int a){
    int div,i;
    printf("The divisor of %d is:",a);
    for(i=1;i<=a;i++){

    if(a%i==0){
    printf("%d\t",i);
    }
    }



}


void main(){
int a;
clrscr();
printf("Enter a no to find divisor:\n");
scanf("%d",&a);
divisor(a);
getch();
}