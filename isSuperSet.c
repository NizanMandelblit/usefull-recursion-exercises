#include <stdio.h>
#include <string.h>

int isSuperSet(char *,char *);
int checkLetter(char *str1,char str2);

int main()
{
    char test[]="testing";
    char test2[]="eig";
printf("%d",isSuperSet(test,test2));
    return 0;
}

int isSuperSet(char *str1,char *str2)
{
if(*str2=='\0')
    return 1;
if(checkLetter(str1,*str2)==0)
    return 0;
isSuperSet(str1,str2+1);
}

int checkLetter(char *str1,char c)
{

if(*str1=='\0')
    return 0;
if(*str1==c)
    return 1;
checkLetter(str1+1,c);
}
