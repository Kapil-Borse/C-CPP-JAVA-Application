#include<stdio.h>


int Multiplication(int No1, int No2)

{

	int Ans = 0;
	Ans = No1 * No2;
	return Ans;

}

int main()

{

	int A = 10, B= 11;
	auto int Ret=0;
	printf("Inside main function\n");


	Ret = Multiplication(A,B);
	printf("Multipliucation is : %d\n",Ret);

	return 0;
}