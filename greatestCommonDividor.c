/**
 * C program to bubble sort array using recursion
 */

#include <stdio.h>
int gcd(int num1,int num2,int );
int main()
{
int result=gcd(12,30,12);
printf("%d",result);
    return 0;

}

int gcd(int num1,int num2,int div)
{
if((num1%div==0) && (num2%div==0))
    return div;
return gcd(num1,num2,div-1);

}
