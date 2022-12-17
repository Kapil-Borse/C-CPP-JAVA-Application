#include<stdio.h>

static int Global_static = 10;

void Fun_Normal()
{

static int i = 10;

++i;

	printf("\nValue of i from Fun_Normal is %d",i);
	printf("nAddress of static variable is %u",&i);

}
void Gun_Recursive_Static()
{
	static int i = 5;

	i--;

	if(i != 0)
  	{

 		printf("\nIn Gun_Recursive_Static value of is is %d",i);
		Gun_Recursive_Static();
	}

}


void Gun_Recursive_Auto()
{

		auto int i=5;

		i--;
		if(i !=0)
		{
			printf("\nIn Gun_Recursive_Auto value of is is %d",i);
			Gun_Recursive_Auto();

		}

}

int main()
{


	Fun_Normal();
	Fun_Normal();
	Fun_Normal();

	Gun_Recursive_Static();

	return 0;
}

