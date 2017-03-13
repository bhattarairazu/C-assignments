//13. Write a program to read a matrix of size m*n entered by the user and display its transpose matrix. Use Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>
int main()
{
int **a;
int ar,ac;
int i,j;
printf("\nEnter rows and columns for matrix :");
scanf("%d%d",&ar,&ac);
/* allocate memory for matrix */
a=(int **) malloc(sizeof(int *)*ar);
for( i=0;i<ar;i++)
{
a[i]=(int *) malloc(sizeof(int*)*ac);
}
// matrix input
printf("\n enter matrix one %d by %d\n",ar,ac);
for(i=0;i<ar;i++)
{
for(j=0;j<ac;j++)
{
scanf("%d",&a[i][j]);
}
} 								//output matrix
printf("\n Transpose of matrix  is : \n");
for(i=0;i<ac;i++)
{
for(j=0;j<ar;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
/*free memory*/
for(i=0;i<ar;i++)
{
free(a[i]);
}
free(a);
}
