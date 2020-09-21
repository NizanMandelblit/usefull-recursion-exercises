#include<stdio.h>

void reverse(char* letters,int size,char *reversearray);
int main()
{
char *test="w3resource";//SIZE OF ARRAY IS 10
char reversed[10];
reverse(test,10,reversed);

for(int i=0;i<10;i++)
    printf("%c",reversed[i]);
    return 0;
}

void reverse(char* letters,int size,char *reversearray)
{
if(size==0)
    return;
*reversearray=letters[size-1];
reverse(letters,size-1,reversearray+1);
}
