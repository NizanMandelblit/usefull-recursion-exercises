#include<stdio.h>

//Write a program in C to calculate the sum of numbers from 1 to n using recursion

int sum(int number);
int main()
{
int test=sum(5);
printf("%d",test);
    return 0;
}

int sum(int number)
{
if(number==1)
    return 1;
return number+sum(number-1);
}
