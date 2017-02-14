
//with arguments and no return values



#include<stdio.h>
#include<conio.h>
void divisible(int a){
if(a%5==0 && a%11==0){

printf("It is divisible by 5or 11\n");

}else{
printf("It is not divisible by 5 or 11:\n");

}



}

void main(){
int a;
clrscr();
printf("Enter a no to check:\n");
scanf("%d",&a);
divisible(a);


getch();
}
