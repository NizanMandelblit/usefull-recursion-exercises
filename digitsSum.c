#include<stdio.h>

//Write a program in C to find the sum of digits of a number using recursion.

int digitsSum(int number, int result);
int main()
{

int test=digitsSum(25,0);
printf("%d",test);

    return 0;
}

int digitsSum(int number, int result)
{
if(number==0)
    return result;
result+=number%10;
digitsSum(number/10,result);
}
