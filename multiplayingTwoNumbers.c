#include<stdio.h>

//Given two numbers N and M. The task is to find the product of the 2 numbers using recursion.
//Note: The numbers can be both positive or negative.
int mult(int number1, int number2);
int main()
{
int test=mult(-5,3);
printf("%d",test);
    return 0;
}

int mult(int number1, int number2)
{
if(number2==0)
    return 0;
if(number2==1)
    return number1;
if(number2==-1)
    return (-1*number1);
if(number2>0)
return number1+mult(number1,number2-1);
//if its negative
else
    return (-1*number1)+mult(number1,number2+1);
}
