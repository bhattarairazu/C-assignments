
//WAP in C to find whether the given number is prime or not using function

#include<stdio.h>
#include<conio.h>

void prime(int a){
  int i,flag=0;
  if(a==1){
  printf("It is neither prime nor composite:\n");
  }else{
  for(i=2;i<=a/2;i++){
  if(a%i==0){
  flag=1;
  break;

  }

  }


  if(flag==0){
  printf("It is prime:\n");

  }else{

  printf("It is not prime");
  }
  }
}
int main(){
 int a;
 //clrscr();
 printf("Enter a no.to check prime or not.\n");
 scanf("%d",&a);
 prime(a);


 return 0;


}
