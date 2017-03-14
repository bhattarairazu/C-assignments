#include <stdio.h>
#include <stdlib.h>
struct employee{
            char name[100];
            int emp_id;
            char department[100];
            float salary;
            int age;
            char address[100];
               }emp;
void printinfo(struct employee employ);
int main()
{
   // struct employee emp;
    printf("Enter the name,id,department,salary,age and address of employee:\n");
    gets(emp.name);
    scanf("%d",&emp.emp_id);
    //gets(emp.department);
    scanf("%s",emp.department);
    scanf("%f",&emp.salary);
    scanf("%d",&emp.age);
    scanf("%s", emp.address);

    printinfo(emp);
    return 0;
}
void printinfo(struct employee employ){
    printf("Your name is:%s\n",employ.name);
    printf("Your id no is:%d\n",employ.emp_id);
    printf("Your department is %s\n",employ.department);
    printf("Your salary is %.2f\n",employ.salary);
    printf("Your age is %d\n",employ.age);
    printf("Your address is %s\n",employ.address);

}

