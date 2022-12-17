#include<stdio.h>



struct Demo
{
	int i;
	float f;
	char ch;
	double d;
};

int main()
{
	
	struct Demo dobj;
	
	printf("Size of the structure is : %d\n",sizeof(dobj));
	
    return 0;

}