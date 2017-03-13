

//6. Write a function that is passed an array of n pointer to floats and returns a newly created array that contains those n float values.

#include<stdio.h>
#include<stdlib.h>
int main ()
{
	float *a[10],*b[10];
	int i,m;
	printf("Enter the no of the array : ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("Enter the element [%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nBefore array : \n");
	for(i=0;i<m;i++)
	{
		printf("a[%d]=%f\n",i,a[i]);
	}
	for(i=0;i<m;i++)
	{
		b[i]=&a[i];
	}
	printf("\n\nAfter array : \n");
	for(i=0;i<m;i++)
	{
		printf("b[%d]=%f\n",i,*b[i]);
	}
	return 0;
}
