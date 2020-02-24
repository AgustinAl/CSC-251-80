/* 
Name: Agustin Alejandre
Class: CSC 251-81
Lab 06
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int firstArray[ 5 ]={ 0, 2, 4, 6, 8 };
	int secondArray[ 5 ]={ 1, 3, 5, 7, 9 };
	int temp1;
	int temp2;
	int i,j;

	printf("Before Swap \n");

	for(i=0;i<5;i++)
	{
		printf("firstArray[%d] = %d, secondArray[%d] = %d \n" , i, firstArray[i], i, secondArray[i]);
	}

	printf("After Swap \n");

	for(j=0;j<5;j++)
	{
		temp1 = firstArray[j];
		temp2 = secondArray[j];
		firstArray[j] = temp2;
		secondArray[j] = temp1;
		printf("firstArray[%d] = %d, secondArray[%d] = %d \n" , j, firstArray[j], j, secondArray[j]);

	}
	return EXIT_SUCCESS;
}
