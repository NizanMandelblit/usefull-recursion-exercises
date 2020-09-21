#include <stdio.h>
//reverse print a string  array in recursion
void reversePrint(char **test, int size);

int main()
{
char *test[]={"aba","ima","data"};
reversePrint(test,sizeof(test)/sizeof(test[0]));

}

void reversePrint(char **test, int size)
{
    if(size==0)
		return;
	printf("%s\n",test[size-1]);
	reversePrint(test,size-1);
}
