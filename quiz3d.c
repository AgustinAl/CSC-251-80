//Name: Agustin Alejandre
//Class: CSC 251-80
//quiz
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
int main(void)
{
	FILE *p;
	FILE *rp;
	int array[20];
	char name[20];
	int i;
	int b;
	srand(time(NULL));
	if((p = fopen("testtext.txt", "r")) == NULL)
	{
		printf("File does not exist. \n");

	}
	else{
	fscanf(p,"%s",name);
		rp=fopen("output.txt","w");
		
				for(i=0;i<20;i++)
					{
						array[i]=rand()%13;
						array[i]+=5;
						fprintf(rp,"%d \n",array[i]);
					}
	
			fprintf(rp,"%s",name);
		fclose(rp);
		fclose(p);
	}
	return EXIT_SUCCESS;
}
