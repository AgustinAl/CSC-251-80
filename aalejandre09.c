//Name:Agustin Alejandre
//Class: CSC 251-80
//Lab 09

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void lowercase(char *r);
void uppercase(char *r);
void vowels(char *r);
int numbers(char *r);

int main(void)
{
	int x,y;
	char charray[20];
	printf("Enter a string less than 20 characters that includes one number");
	fgets(charray,20,stdin);
	char *ptr=charray;
	lowercase(ptr);
	uppercase(ptr);
	vowels(ptr);
	x=numbers(ptr);
	y=x*12;
	printf("(Numbers Entered is String) %d * 12 = %d \n",x,y);
	return EXIT_SUCCESS;
}
void lowercase(char *r)
{
	int i;
	printf("Lowercase Letters: \n");
	for(i=0;i<20;i++)
	{
		if(islower(*r)>0)
		{
			printf("%c",*r);
		}
		r++;
	}
	
	printf("\n");
}
void uppercase(char *r)
{
	int i;
	printf("Uppercase Letters: \n");
	for(i=0;i<20;i++)
	{
		if(isupper(*r)>0)
		{
			printf("%c",*r);
		}
		r++;
	}
	printf("\n");
}
void vowels(char *r)
{
	int i;
	int x=0;
	printf("Number of Vowels \n");
	for(i=0;i<20;i++)
	{
		if(*r == 'a' || *r == 'e' || *r == 'i' || *r == 'o' || *r == 'u' || *r == 'y' || *r == 'A' || *r == 'E' || *r == 'I' || *r == 'O' || *r == 'U' || *r == 'Y')
		{
			x++;
		}
	r++;
	}
	printf("%d \n",x);
}
int numbers(char *r)
{
	int i;
	int x;
	for(i=0;i<20;i++)
	{
		if(isdigit(*r)>0)
		{
			x = *r-'0';
		}
		r++;
	}
	return x;
}
