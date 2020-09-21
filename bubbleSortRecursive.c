/**
 * C program to bubble sort array using recursion
 */

#include <stdio.h>
void sort(int *str,int size, int i);
void sortHelp(int *array,int size,int i,int j);
void swap(int* a,int* b);
int main()
{
int array[]={1,3,2,1};
int size=sizeof(array)/4;
sort(array,size,0);
    return 0;
}

void sort(int *str,int size, int i)
{

if(i==size)
    return;
sortHelp(str,size,i,i+1);
sort(str,size,i+1);

}

void sortHelp(int *array,int size,int i,int j)
{
if(j==size)
    return;
if(array[i]>array[j])
swap(array+i,array+j);
sortHelp(array,size,i,j+1);
}

void swap(int* a,int* b)
{
int temp=*a;
*a=*b;
*b=temp;

}



