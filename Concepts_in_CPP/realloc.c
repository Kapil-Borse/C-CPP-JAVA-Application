#include<stdio.h>
#include<stdlib.h>



int main()
{
	int *p = NULL;
	int *q = NULL;
	
	
	p = (int *)malloc(10 * sizzeof(int));
	
	// use the memory
		
	q = (int *)realloc(p, 15 * sizzeof(int));	
	
	if(q == NULL)
	{
		printf("Realloc fails");
		q=p;
	
	}	
	
	//use the memory
	
	free(q);
 
    return 0; 
}