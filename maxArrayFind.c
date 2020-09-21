#include<stdio.h>

int maxarray(int* numbers,int max);
int main()
{
  int num[]={10,0,34,2};
  *(num+4)='\0';
  int result=maxarray(num,0);
    printf("%d\n",result);
    return 0;
}

int maxarray(int* numbers,int max)
{
if(*numbers=='\0')
    return max;
if((*numbers)>max)
    max=*numbers;
maxarray(numbers+1,max);
}
