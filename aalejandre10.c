//Name: Agustin Alejandre
//Class: CSC 251-80
//Lab 10
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void pos(void);
void neg(void);
void zero(void);
int main(void)
{
	FILE *p;
	int b;
	if((p=fopen("input.txt","r"))==NULL)
	{
		puts("File could not be opened");
	}
	else
	{	while(b!=4)
		{
			printf("You have four choices type in number only \n");
			printf("1.Display Positive balance \n");
			printf("2.Display Negative balance \n");
			printf("3.Display Zero balance \n");
			printf("4.End program \n");
			scanf("%d \n",&b);
			switch(b)
			{
				case 1:
					pos();
					break;
				case 2:
					neg();
					break;
				case 3:
					zero();
					break;
				case 4:
					break;
				default :
					break;

			}
		}
	}
		return EXIT_SUCCESS;
}
void pos(void)
{
	FILE *p,*rp;
	int b=1;
	int account=0;
	char name[30];
	double balance=0;
	if((p =fopen("input.txt","r"))==NULL)
	{
		puts("File does not exist");
	}
	else
	{
		fscanf(p,"%d%29s%lf",&account, name, &balance);
		while(!feof(p))
		{
			if(balance>0)
			{
				fprintf(rp,"Account: %d , Name: %s, Balance: %.2f \n", account, name, balance);
				if((rp = fopen("output.txt", "w")) == NULL)
				{
					fprintf(rp,"%d \n", b);
				}
			}
			fscanf(p,"%d%29s%lf",&account,name,&balance);
		}
		fclose(rp);
		fclose(p);
	}
}
void neg(void)
{
	FILE *p;
	FILE *rp;
	int b = 2;
	int account;
	double balance;
	char name[30];

	if((p = fopen("input.txt", "r")) == NULL)
	{
		printf("File does not exist. \n");
	}
	else{
		fscanf(p,"%d%29s%lf", &account, name, &balance);
		while(!feof(p))
		{
			if (balance < 0)
			{
				fprintf(rp,"Account: %d, Name: %s, Balance: %.2f \n",account,name,balance);
				if ((rp = fopen("output.txt", "w")) == NULL)
				{
					fprintf(rp,"%d \n", b);
				}
			}
			fscanf(p,"%d%29s%lf", &account, name, &balance);
		}
		fclose(rp);
		fclose(p);
	}
}
void zero(void)
{
	FILE *p;
	FILE *rp;
	int account;
	int b = 3;
	double balance;
	char name[30];

	if((p = fopen("input.txt", "r")) == NULL)
	{
		printf("File does not exist. \n");

	}
	else{
		fscanf(p, "%d%29s%lf",&account,name,&balance);
		while(!feof(p))
		{
			if (balance == 0)
			{
				fprintf(rp,"Account: %d, Name:%s, Balance: %.2f \n", account, name, balance);
				if ((rp = fopen("output.txt", "w")) == NULL)
				{
					fprintf(rp,"%d \n", b);

				}
			}
			fscanf(p, "%d%29s%lf", &account, name , &balance);
		}
		fclose(rp);
		fclose(p);
	}
}
