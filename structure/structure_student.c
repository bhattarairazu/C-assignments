#include <stdio.h>
#include <stdlib.h>
struct student{
            char name[100];
            int roll;
            float marks;
            char remarks;
               };
void printinfo(struct student records);
int main()
{
    struct student record={0};
    printf("Enter the name of the student,roll,marks,remarks:\n");
    gets(record.name);
    scanf("%d",&record.roll);
    scanf("%f",&record.marks);
    scanf(" %c",&record.remarks);
    //printf("Hello world!\n");
    printinfo(record);
    return 0;
}
void printinfo(struct student records){
    printf("Your name is:%s\n",records.name);
    printf("Your roll no is:%d\n",records.roll);
    printf("Your marks is %.2f\n",records.marks);
    printf("Your remarks is %c\n",records.remarks);

}
