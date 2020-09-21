#include<stdio.h>

//Write a program in C to count the digits of a given number using recursion.

int digitsCount(int number, int result);
int main()
{
int test=digitsCount(534,0);
printf("%d",test);
    return 0;
}

int digitsCount(int number, int result)
{
if(number==0)
    return result;
result++;
digitsCount(number/10,result);
}
