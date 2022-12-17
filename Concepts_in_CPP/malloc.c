#include<stdio.h>
#include<stdlib.h>

struct Demo 
{
	int i;
	float f;
	
};

int main()
{
   int *p = NULL;
   int size = 0;
   
   printf("enter the size\n");
   scanf("%d",&size);
   
   p =(int *)malloc(sizeof(int) * size);
 
    return 0; 
}