//Name: Agustin Alejandre
//Class: CSC 251-80
//Lab #11
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	FILE *input, *output;
	int b;
	int i,j;
	int k,l;
	char word[120];
	if(argc>3)
	{
		puts("too many arguements");
	}
	else if (argc<3)
	{
		puts("too few args");
	}
	else
	{
		if((input=fopen(argv[1],"r"))==NULL)
		{
			puts("File could not be opened");
		}
		else
		{
			fscanf(input,"%s",word);
			output=fopen(argv[2],"w");
			printf("Choose an option below to modify your wordlist \n");
			printf("1. Change the second letter to a capital letter. \n");
			printf("2. Make each word lowercase except for the last letter \n");
			printf("3. Make each word uppercase except for the first letter. \n");
			printf("4. Duplicate each word 5 times. \n");
			scanf(" %d", &b);
			switch(b)
			{
				case 1:
					for(i=0;i<strlen(word);i++)
					{
						if(i==1)
						{
							word[i]=toupper(word[i]);
						}
					}
					fprintf(output,"%s \n",word);
					break;
				case 2:
					for(j=0;j<strlen(word)-1;j++)
					{
						if(isupper(word[j]))
						{
							word[j]=tolower(word[j]);
						}
					}
					fprintf(output,"%s \n",word);
					break;
				case 3:
					for(k=1;k<strlen(word);k++)
					{
						if(islower(word[k]))
						{
							word[k]=toupper(word[k]);
						}
					}
					fprintf(output,"%s \n",word);
					break;
				case 4:
					for(l=0;l<5;l++)
					{
						fprintf(output,"%s",word);
						fprintf(output,"%d \n",l+1);
					}
					break;
				default :
					break;
			}
	fclose(output);
	fclose(input);
	printf("Wordlist complete. Check \"%s\" for results \n",argv[2]);
	}
}
	return EXIT_SUCCESS;
}

