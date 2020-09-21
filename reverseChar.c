/**
 * C program to revese a bits of a given char
 */

#include <stdio.h>
#define CHAR_SIZE sizeof(char) * 8 /* Size of char in bits */
//FOR EXEMPLE 13 IN BINARY IS 00001101 YOU SHOULD RETURN 10110000
char reverseChar(char c,char result,int size);
int main()
{
    int i;
    char c=13;//IN BINARY IS 00001101
    char result=0;
result=reverseChar(c,result,CHAR_SIZE-1);
for(i=0;i<=CHAR_SIZE-1;i++)
{
       printf("%d", result&1);
        result=result>>1;
}
    return 0;
}

char reverseChar(char c,char result,int size)
{
    char mask=1<<size;
    result+=mask&c;
    if(size==0)
        return result;
    return reverseChar(c,result,size-1);
}



