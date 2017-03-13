//5. Write a program that uses pointers to copy an array of integer.
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int a[10],*b[10];
	int i,m;
	printf("Enter the limit of the array : ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("Enter the element [%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nBefore copying array : \n");
	for(i=0;i<m;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	for(i=0;i<m;i++)
	{
		b[i]=&a[i];
	}
	printf("\n\nAfter copying array : \n");
	for(i=0;i<m;i++)
	{
		printf("b[%d]=%d\n",i,*b[i]);
	}
	return 0;
}

