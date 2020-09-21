#include<stdio.h>

//Write a program in C to check a number is a prime number or not using recursion.

int checkPrime(int number,int loop);
int main()
{

int result=checkPrime(7,2);
if(result==1)
    printf("the number is prime");
else
    printf("the number is not prime");
    return 0;
}

int checkPrime(int number,int loop)
{
if(loop==number)
{
return 1;
}
if(number%loop==0)
    return 0;
checkPrime(number,loop+1);
}
