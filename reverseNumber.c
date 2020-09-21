#include <stdio.h>
#include <string.h>

int reverseNumber(int , int);

int main()
{
int num=12345;
printf("%d", reverseNumber(num,0));
    return 0;
}

int reverseNumber(int num , int result)
{
if(num==0)
    return result;
result=result*10+(num%10);
reverseNumber(num/10,result);
}
