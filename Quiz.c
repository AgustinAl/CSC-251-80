//Name:Agustin Alejandre
//Class: CSC 251-80
//Quiz

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<time.h>

void fillcharr(char *r);
void fillint(int *r);
void toUp(char *r);
void printarray(char *r,int *b);
int main(void)
{
	char charray[5];
	int intarray[5];
	char *ptr=charray;
	int *rtp=intarray;
	fillint(rtp);
	fillcharr(ptr);
	toUp(ptr);
	printarray(ptr,rtp);
	return EXIT_SUCCESS;
}
void fillint(int *r)
{
	int i;
	srand(time(NULL));
	for(i=0;i<5;i++)
	{
		*r=rand()%11;
		*r+=10;
		r++;
	}
}
void fillcharr(char *r)
{
	int i;
	for(i=0;i<5;i++)
	{
		*r='a'+rand()%26;
		r++;
	}
}
void toUp(char *r)
{
	int i;
	for(i=0;i<5;i++)
	{
		*r=toupper(*r);
		r++;
	}
}
void printarray(char *r,int *b)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("arrayOne[%d]=%d\n",i,*b);
		b++;
	}
	for(j=0;j<5;j++)
	{
		printf("arrayTwo[%d]=%c\n",j,*r);
		r++;
	}
}
