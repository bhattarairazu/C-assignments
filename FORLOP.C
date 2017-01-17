#include<stdio.h>
#include<conio.h>
void main(){
int a,n,sum=0;
clrscr();
 printf("Enter a number to find a sum of even:\n");
 scanf("%d",&n);
for(a=1;a<=n;a++){

//printf("Value of a is: %d\n",a);
 if(a%2==0){
 sum =sum+a;
}
}
printf("the sum is %d\n",sum);






  getch();

}