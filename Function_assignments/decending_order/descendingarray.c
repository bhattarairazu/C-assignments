
//Write a program in c to input any 10 number in an array and sort them in descending order using function. (Pass Whole array).


#include <stdio.h>
#include <stdlib.h>

    void descending(int nums[]){
int i,j,temp=0;
for(i=0;i<9;i++){
    for(j=i+1;j<=9;j++){
            if(nums[i]<nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
    }

}

printf("The descending order is:\n");
      for(i=0;i<=9;i++){
           printf("%d\t",nums[i]);



      }

}

int main()
{
    int i,j,a[10];
    printf("Enter any 10 no.:\n");
    for(i=0;i<10;i++){

        scanf("%d",&a[i]);
    }
    descending(a);
      //printf("The descending order is:\n");
      //for(i=0;i<=9;i++){
        //    printf("%d\t",a[i]);



      //}

return 0;
}
