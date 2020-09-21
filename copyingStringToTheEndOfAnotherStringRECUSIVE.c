/**
 * C program to concatenate two strings
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size
void copyStr(char *,char *);
void help2(char* str1,char* str2,int str1End);
int main()
{
char str1[MAX_SIZE]={0};
strcpy(str1,"test");
char str2[MAX_SIZE]={0};
strcpy(str2," another word");
copyStr(str1,str2);
printf("%s",str1);
    return 0;
}

void copyStr(char *str1,char* str2)
    {
    int str1End=help(str1,0);
   help2(str1,str2,str1End);
    }

int help(char *str,int index)
{
if(*str=='\0')
    return index;

help(str+1,index+1);

}

void help2(char* str1,char* str2,int str1End)
{
    if(*str2==0)
        return;
    str1[str1End]=*str2;

    help2(str1,str2+1,str1End+1);

}
