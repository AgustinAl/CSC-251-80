/*
   Name: Agustin Alejandre
   Class: CSC 251-80
   Lab04
*/
#include<stdlib.h>
#include<stdio.h>

char prompt(void);

double mathtotal(int x, int y, int z, int a, int div);

double printtime(int a, int b, int c, int d, int f, double total);
int main(void)
{
int y=0;
int counta=0,countb=0,countc=0,countd=0,countf=0;
double total=0;
char check;
	while(!(check=='z' || check=='Z'))
	{
		check = prompt();
		switch(check)
		{
		case 'a':
			counta++;
			y++;
			break;
		case 'A':
			counta++;
			y++;
			break;
		case 'b':
			countb++;
			y++;
			break;
		case 'B':
			countb++;
			y++;
			break;
		case 'c':
			countc++;
			y++;
			break;
		case 'C':
			countc++;
			y++;
			break;
		case 'd':
			countd++;
			y++;
			break;
		case 'D':
			countd++;
			y++;
			break;
		case 'f':
			countf++;
			y++;
			break;
		case 'F':
			countf++;
			y++;
			break;
		case 'z':
			break;
		case 'Z':
			break;
		default:
			printf("you did not press z or a letter grade \n");
		}
	}


		 	total=mathtotal(counta,countb,countc,countd,y); 
			printtime(counta,countb,countc,countd,countf,total);
			return EXIT_SUCCESS; 
}

char prompt(void)
{
	char x;
	printf("enter a grade:(press z to quit)");
	scanf(" %c",&x);
	return x;
}

double mathtotal(int x,int y,int z,int a,int div)
{
	double total = (4.0*x+3.0*y+2.0*z+1.0*a)/div;
	return total;
}
double printtime(int a, int b, int c, int d, int f, double total)
{
	printf("There are %d A's, %d B's, %d C's %d D's, %d F's \n",a,b,c,d,f);
	printf("The class average is %f \n",total);
}
