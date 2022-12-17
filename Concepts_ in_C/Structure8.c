#include<stdio.h>

struct Demo
{
	int i; 
	int j;
	int k;
	char ch;
	float f;
	float f1;

};

int main()
{
	
	struct Demo dobj;
	
	printf("Size of the structure is : %d\n",sizeof(dobj));
	
    return 0;

}