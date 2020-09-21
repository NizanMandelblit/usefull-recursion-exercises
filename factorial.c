#include<stdio.h>

//Write a program in C to find the Factorial of a number using recursion

int factorial(int number);
int main()
{
int test=factorial(4);
printf("%d",test);
    return 0;
}

int factorial(int number)
{
if(number==0)
    return 1;
return number*factorial(number-1);
}
