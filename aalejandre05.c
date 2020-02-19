/* 
Name: Agustin Alejandre
Class: CSC 251-81
Lab 05
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prompt(void);
int generation(void);
void result(int c1,int c2,int c3, int c4,int c5, int c6, int c7, int c8, int c9, int c10);

int main(void)
{
	int x=0,y=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0;
//	printf("enter a seed \n");
//	scanf("%d", &y);
	srand(time(NULL));
	y = prompt();
	int i;
	for(i=0 ;i<y ;i++)
	{
		x = generation();
/* */
		if(x==1)
		{
			c1++;
		}
		else if(x==2)
		{
			c2++;
		}
		else if(x==3)
		{
			c3++;
		}
		else if(x==4)
		{
			c4++;
		}
		else if(x==5)
		{
			c5++;
		}
		else if(x==6)
		{
			c6++;
		}
		else if(x==7)
		{
			c7++;
		}
		else if(x==8)
		{
			c8++;
		}
		else if(x==9)
		{
			c9++;
		}
		else if(x==10)
		{
			c10++;
		}
	} 
	result(c1,c2,c3,c4,c5,c6,c7,c8,c9,c10);
       
  	
	return EXIT_SUCCESS;	
}
int prompt(void)
{ 
	int y;
	printf("enter how many times to roll a d-10 ");
	scanf(" %d", &y);
	return y;
} 
int generation(void)
{
	int y; 
	y=(rand()%10+1);
	return y;
}
void result(int c1,int c2,int c3, int c4, int c5, int c6, int c7, int c8, int c9, int c10)
{
	printf("%d ones \n%d twos \n%d threes \n%d fours \n%d fives \n%d sixes \n%d sevens \n%d eights \n%d nines \n%d tens \n",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10);
}
