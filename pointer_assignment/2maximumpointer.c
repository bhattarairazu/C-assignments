//2. Write a function that is passed with an array of n pointers which returns the maximum.
#include<stdio.h>
#include<stdlib.h>
int sort(int *,int);
int main ()
{
	int a[10],n,i,*b,max;
	printf("Enter how many numbers : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element [%d]",i);
		scanf("%d",(a+i));
	}
	printf("Elements in array are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}

	max=sort(a,n);
	printf("\n\nThe maximum number is %d",max);
}
int sort(int *b,int n)
{
	int i,j,temp,*max;
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if (*(b+i)>*(b+j))
			{
				temp=*(b+i);
				*(b+i)=*(b+j);
				*(b+j)=temp;
			}
		}
	}
	printf("\nSorted array is :  \n");
	for(i=0;i<n;++i)
	{
		printf("%d\t",*(b+i));
	}
	max=(b+n-1);
	return *max;

 }
