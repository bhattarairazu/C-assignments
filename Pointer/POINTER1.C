#include<stdio.h>
#include<conio.h>
void main(){
int a=20;
int *p;
int **q;
clrscr();
p=&a;
q=&p;
printf("%d",*p);
printf("%d",**q);
getch();



}