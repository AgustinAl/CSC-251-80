//Name:Agustin Alejandre
//Class: CSC 251-80
//Quiz

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<time.h>

void fillcharr(char array[]);
void fillint(int array[]);
void toUp(char array[]);
void printarray(char array[],int ray[]);
int main(void)
{
	char charray[5];
	int intarray[5];
	fillint(intarray);
	fillcharr(charray);
	toUp(charray);
	printarray(charray,intarray);
	return EXIT_SUCCESS;
}
void fillint(int array[] )
{
	int i;
	srand(time(NULL));
	for(i=0;i<5;i++)
	{
		array[i]=rand()%11;
		array[i]+=10;
	}
}
void fillcharr(char array[])
{
	int i;
	for(i=0;i<5;i++)
	{
		array[i]='a'+rand()%26;
	}
}
void toUp(char array[])
{
	int i;
	for(i=0;i<5;i++)
	{
		array[i]=toupper(array[i]);
	}
}
void printarray(char array[],int ray[])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("arrayOne[%d]=%d\n",i,ray[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("arrayTwo[%d]=%c\n",j,array[j]);
	}
}
