
//Write a function that is passed an array of n pointers to floats and returns a newly created array that contains those n float values in reverse order

#include<stdio.h>
#include<stdlib.h>
#define max 30

int main() {
   int size, i;
   int *ptr,arr[max];


   ptr = &arr[0];

   printf("\nEnter the size of array : ");
   scanf("%d", &size);

   printf("\nEnter %d element into array: ", size);
   for (i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
   }

   ptr = &arr[size - 1];

   printf("\nElements of array in reverse order are : \n");

   for (i = size ; i >= 1; i--) {
      printf("\ %d\t  ", i, *ptr);
      ptr--;
   }


}
