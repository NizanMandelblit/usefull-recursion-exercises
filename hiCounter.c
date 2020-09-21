/**
 * C program to count total of zeros and ones in a binary number using bitwise operator
 */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Total number of bits in integer */
int hiCounter(char*,int);
int main()
{
int result=hiCounter("hihidasdsadhi",0);
printf("%d", result);

    return 0;
}

int hiCounter(char* str,int counter)
{
if(*str=='x')
    str=str+3;
if(*str=='\0')
    return counter;
if(checkForHi(str))
    counter++;
hiCounter(str+1,counter);

}

int checkForHi(char * str)
{
    if(*str=='\0')
        return 0;
    if(*str=='h' && *(str+1)=='i')
        return 1;
    return 0;
}
