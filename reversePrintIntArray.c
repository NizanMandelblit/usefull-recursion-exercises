#include <stdio.h>
//reverse print a string in recursion
void reversePrint(int *test, int size);

int main()
{
int test[]={5,3,4};
reversePrint(test,sizeof(test)/sizeof(test[0]));

}

void reversePrint(int *test, int size)
{
    if(size==0)
		return;
	printf("%d\n",test[size-1]);
	reversePrint(test,size-1);
}
