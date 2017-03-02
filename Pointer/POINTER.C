#include<stdio.h>
#include<conio.h>
void main(){
//int *p=NULL;
//int a,b;
//printf("Address of a=%u\n",p);
//printf("%d\n",a/b);
//printf();
int a=10;
double b=4.5;
char c='a';
void *v;
v=&a;
clrscr();
printf("Address is: %d\n",*((int *)v));
v=&c;
printf("Address is :%c\n",*((char *)v));
v=&b;
printf("Address is :%f\n",*((double *)v));
  getch();

}