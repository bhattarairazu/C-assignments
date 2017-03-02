#include<stdio.h>
#include<conio.h>
void main(){

int a=10;
double b=4.5;
void *v=NULL;
v=&a;
clrscr();

printf("%d",*((int *)v));
getch();


}