#include<stdio.h>

//Write a program in C to convert decimal to Binary in recursion

long binary(int number,long result,int loop);
int main()
{
long test=binary(66,0,1); //The Binary value of decimal no. 66 is : 1000010
printf("The Binary value of decimal no. 66 is: %ld",test);
    return 0;
}

long binary(int number,long result,int power )
{
if(number==0)
{
return result;
}
int temp=number%2;
result=result+(temp*power);
power*=10;
binary(number/2,result,power);
}
