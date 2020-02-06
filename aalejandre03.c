#include<stdlib.h>
#include<stdio.h>

int main(void)
{
int y=0;
int counta=0,countb=0,countc=0,countd=0,countf=0;
double total=0;
char check;
	while(!(check=='z' || check=='Z'))
	{
		printf("enter a grade:(press z to quit)");
		scanf(" %c", &check);
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

			total= (4.0*counta+3.0*countb+2.0*countc+1.0*countd+0.0*countf) / y; 
			printf("There are %d A's, %d B's, %d C's, %d D's, %d F's \n",counta,countb,countc,countd,countf);
			printf("The class average is %f \n",total);
			return EXIT_SUCCESS; 
}
