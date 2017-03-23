#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct employee{
               char name[100];
               int age;
               int salary;
                };
int main()
{
    struct employee ee;
    FILE *fp;
    char c;
    int d=0;
    char s[100];
    fp=fopen("employee.dat","w+b");
    ff:
    printf("Enter employee name,age and salary:\n");
    fflush(stdin);
    gets(ee.name);

    scanf("%d",&ee.age);
    scanf("%d",&ee.salary);
    fwrite(&ee,sizeof(ee),1,fp);
    printf("\nDo you want to enter another record:(y/n)?");
    fflush(stdin);
    c=getchar();
    switch(c){
    case 'y':
        goto ff;
        break;
    case 'n':

        printf("Enter employee name to be searched:\n");
        fflush(stdin);
        gets(s);
      //printf("Enter another employee name to replace:\n");
        //fflush(stdin);
        //gets(sh);
        rewind(fp);
        printf("\t\t\t\t\tName\t|Age\t|Salary\t\n");
        while(fread(&ee,sizeof(ee),1,fp)>0){

            if(strcmp(ee.name,s)==0){
                    d=1;

            printf("\t\t\t\t\t%s\t%d\t%d\n",ee.name,ee.age,ee.salary);

        }

        }
        if(d==0){
                printf("No matching records found:\n");

        }

      break;
default:
   printf("Enter a y or n only:\n");

    }

    return 0;
}
