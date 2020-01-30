/* Name: Agustin Alejandre
   Class: CSC 251-80
   Lab 02
*/
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int x,y,z,a;
	x=6;
	
	
	
	printf("Enter a number between 1 and 10 inclusive \n");
	scanf("%d",&y);


	z=x+y;
	printf("%d + magic number = ",y);
	printf("%d \n",z);

	z=x*y;
	printf("%d * magic number = ",y);
	printf("%d \n",z);

	z=y-x;
	printf("%d - magic number = ",y);
	printf("%d \n",z);
	
	printf("What it your guess? \n");
	scanf("%d",&a);

	if(a==x)
	{
	printf("You are correct! You win \n");
	}
	else
	{
	printf("You are not correct! You lose \n");
	}
	return EXIT_SUCCESS;
}
	
