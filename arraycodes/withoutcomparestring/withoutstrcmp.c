

////WAP to compare two string without using Strcmp().


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100],str[100];
    printf("Enter 1st string:\n");
    gets(string);
    printf("Enter 2nd string:\n");
    gets(str);
    int  j=strlen(string);
    int i=0,c=0;
        while(string[i]!='\0'||str[i]!='\0'){

          if(string[i]==str[i]){


                        c=1;
          }else{
          printf("The string %s and %s are different:\n",string,str);
                c=0;
                break;

          }
          i++;
    }
    if(c==1){
        printf("\nwithout strcmp()..The two string %s and %s are same:\n",string,str);

    }


    return 0;
}
