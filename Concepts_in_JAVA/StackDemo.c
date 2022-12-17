#include<stdio.h>

int Addition(int No1, int No2)
{
	int iAns = 0;
	
	printf("Inside Addition\n");
	
	iAns = No1 + No2;
	
	return iAns;
}
int main()
{
	int A = 11, B = 10, Ret = 0;
	
	printf("Inside main\n");
	
	Ret=Addition(A,B);
	
	printf("Addition is : %d\n",Ret);
	
	return 0;
}