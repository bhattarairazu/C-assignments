
//Write a Program in C to input any 10 elements in an array and display them using function. (Passing individual array element).



#include <stdio.h>
#include <stdlib.h>
void array(int);
int main()
{
   int i,j,a[10];
   printf("Enter any 10 numbers:\n");
   for(i=0;i<10;i++){

    scanf("%d",&a[i]);
   }

   for(j=0;j<10;j++){
    array(a[j]);
   }


      return 0;
}
void array(int a){
printf("%d\t",a);

}
