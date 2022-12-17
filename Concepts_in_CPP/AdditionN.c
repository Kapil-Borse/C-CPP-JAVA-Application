/*
	Steps
	step 1: Understand the problem statement
	step 2: Understand the problem statement
	step 3:  Decide the programming language
	step 4: Write the program
	step 5: Test the program
*/	

// Accept N numbers from user and perform addition

// Input
// value of N = 5
// Values : 10 20 30 40 50 

// Output
// Addition is : 150

// Algorithm
/*
	START
	   Accept the number of elements from
	   Allocate the memory to store that numbers
	   Accept the numbers from user
	   Perform addition of all numbers
	   Display the addition
	END  
*/


#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////
//
// Application Name : Addition of N numbers
// Input : N numbers
// Output : Addition
// Author : Kapil Rajendra Borse
// Date : 18 September 2022
////////////////////////////////////


int main()
{
	int *Arr = NULL;
	int iSize =  0;
	int i = 0;
	int iSum = 0;
 
	printf("Please enter how many elements you want?\n");
	scanf("%d",&iSize);
	
	Arr = (int *)malloc(iSize * sizeof(int));
	
	printf("Please enter the elements\n");  // lets suppose we enter the element as 5
	     //1       //2    //3
	for(i = 0; i < iSize; i++)
		
		{
			scanf("%d",&Arr[i]);  //4
		}
		  //1     //2    //3
	for(i = 0; i< iSize; i++)
	   {
		iSum = iSum + Arr[i];   //4 
		}
		
		
		printf("Addition is : %d\n",iSum);

		free(Arr);
		printf("Memory gets deallocated.\n");
		
    return 0; 
}