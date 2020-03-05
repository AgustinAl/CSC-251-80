/* 
Name: Agustin Alejandre
Class: CSC 251-81
Lab 06
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 30
#define BRUH 60
void printer(int rname[SIZE]);
void filleven(int rnam[SIZE]);
void fillodd(int ram[SIZE]);
void fillboth(int ra[SIZE]);
void swap(int ra[SIZE],int ba[SIZE]);
int main(void)
{
	int arr[SIZE]={0};
	int arrr[SIZE]={0};
	fillodd(arr);
	filleven(arrr);
	printer(arr);
	printer(arrr);
	swap(arr,arrr);
	printer(arr);
	printer(arrr);
	
	return EXIT_SUCCESS;
}
void printer(int rname[SIZE])
{
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		printf("array[%d]=%d\n",i,rname[i]);
	}
}
void filleven(int rnam[SIZE])
{
	int w=0;
	int e=2;
	for(w=0;w<SIZE;w++)
	{
		rnam[w]=e;
		e=e+2;
	}
}
void fillodd(int ram[SIZE])
{
	int r=0;
	int rr=1;
	for(r=0;r<SIZE;r++)
	{
		ram[r]=rr;
		rr=rr+2;
	}
}
void fillboth(int ra[SIZE])
{
	int r=0;
	int rr=1;
	int re=2;
	for(r=0;r<30;r++)
	{
		ra[r]=rr;
		rr=rr+2;
	}
	for(r=30;r<60;r++)
	{
		ra[r]=re;
		re=re+2;
	}
}
void swap(int ra[SIZE],int ba[SIZE])
{
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		ra[i]=ba[i];
		ba[i]=ba[i]-1;
	}
}
