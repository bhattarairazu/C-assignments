
//with arguments and return values

#include<stdio.h>
#include<conio.h>
int divisible(int a){
int b=0;
if(a%5==0 && a%11==0){
   b=1;
}
  return b;

}

void main(){
int a;
clrscr();
printf("Enter a no.to check:\n");
scanf("%d",&a);
int c=divisible(a);
 if(c==0){
 printf("It is not divisible by 5 or 11:\n");

 } else{

 printf("It is divisible by 5 or 11\n");

 }
 getch();
}
