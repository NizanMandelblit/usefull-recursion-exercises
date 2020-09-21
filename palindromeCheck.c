#include <stdio.h>
#include <string.h>

int palindrome(char * ,int, int);

int main()
{
char str[]="aba";
printf("%d", palindrome(str,0,strlen(str)-1));
    return 0;
}

int palindrome(char* str , int begin,int end)
{
if(begin>=end)
    return 1;
if(str[begin]!=str[end])
    return 0;
return palindrome(str,begin+1,end-1);
}
