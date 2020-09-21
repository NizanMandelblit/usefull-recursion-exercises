#include <stdio.h>
#include <string.h>

int isSuperSet(char *,char *);
int checkLetters(char *str1,char *str2);

int main()
{
    char test[]="testing";
    char test2[]="esnt";
printf("%d",isSuperSet(test,test2));
    return 0;
}

int isSuperSet(char *str1,char *str2)
{
if(*str1=='\0')
    return 0;
if(checkLetters(str1,str2)==1)
    return 1;
isSuperSet(str1+1,str2);
}

int checkLetters(char *str1,char *str2)
{
    if(*str2=='\0')
    return 1;
    if(*str1!=*str2)
        return 0;
    return checkLetters(str1+1,str2+1);
}
