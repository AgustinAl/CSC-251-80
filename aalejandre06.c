/* 
Name: Agustin Alejandre
Class: CSC 251-81
Lab 06
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x=0,y=0,z=0,i=0;
//	printf("enter a seed \n");
//	scanf("%d", &y);
	srand(time(NULL));
	
	for(i=0 ;i<11 ;i++)
	{
		x=(rand()%30);
		x=x+50;
		printf("x = %d y= %d z= %d \n",x,y,z);
	} 
      
  	
	return EXIT_SUCCESS;
}
