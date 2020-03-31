//Name: Agustin Alejandre
//Class: CSC 251-80
//Lab 08

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

void arrFill(int *ptr);
void printer(int *ptr); 
int main(void)
{
	int array[SIZE]={0};
	int *ptr=array;
	arrFill(ptr);
	printer(ptr);
	return EXIT_SUCCESS;
}
void arrFill(int *ptr)
{
	srand(time(NULL));
	int i;
	int x;
	for(i=0;i<SIZE;i++)
	{
		x=rand()%32;
		x+=20;
		*ptr = x;
		ptr++;
	}
}
void printer(int *ptr)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("array[%d]=%d\n",i,*ptr);
		ptr++;
	}
}
