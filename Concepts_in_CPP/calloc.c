#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *p = NULL;
   int size = 0;
   
   printf("enter the size\n",);
   scanf("%d",&size);
   
   p =(int *)malloc(sizeof(int) * size);
   p =(int *)calloc(sizeof(int) , size);
 
    return 0; 
}