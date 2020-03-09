/* 
Name: Agustin Alejandre
Class: CSC 251-81
Lab 07
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30
void printer(int rname[SIZE]);
void fillrand(int rnam[SIZE]);
void sort(int ra[SIZE]);
int main(void)
{
	int arr[SIZE]={0};
	printer(arr);
	fillrand(arr);
	printer(arr);
	sort(arr);
	printer(arr);

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
void fillrand(int rnam[SIZE])
{
	srand(time(NULL));
	int w=0;
	int e=2;
	for(w=0;w<SIZE;w++)
	{
		rnam[w]=rand()%151;
		rnam[w]+=55;
	}
}
void sort(int ra[SIZE])
{
	int i=0;
	int j=0;
	int a;
	for (i = 0; i < SIZE; ++i) 
    	 {
            for (j = i+1; j < SIZE; ++j)
            {
                if (ra[i] > ra[j]) 
                {
                    a =  ra[i];
                    ra[i] = ra[j];
                    ra[j] = a;
                }
            }
        }
}
