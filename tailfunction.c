#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tailheaders.h"
void open(FILE** file , char* filename)
{
	*file=fopen(filename ,"r");
	if(file == NULL)
	{
			printf("Impossibe d'ouvrir le fichier\n");		
		}
	}

int arg_to_number(char* argument)
{	
	int n;
	n=(atoi)(argument);
	return (n);
	}

int count_line(FILE* file ,char* str , int n )
{
	int nbr_of_line;
	nbr_of_line = 0;
	while(feof(file) != 1)
	{
		fgets(str , 254 , file);
		nbr_of_line++;
	}
		nbr_of_line = nbr_of_line -n;
		fclose(file);
		return (nbr_of_line);
	}

void tail_cmd(FILE *file, int nbr_of_line , char *str_line , int n )
{
	int inc ,i ;
	inc=1;
	while(feof(file) != 1)
	{
		fgets(str_line , 255 , file);
		if(inc < nbr_of_line+1)
		{

		}
		else
		{
			printf("%s",str_line);			
		}
		inc++;
	}
		printf("\n\n");
	
}




void tail_cmd_c(FILE *file, int nbr_of_line , char *str_line , int n )
{

	int inc ,i ;
	inc=1;
	char *str;
	char *str2;
	while(feof(file) != 1)
	{
		fgets(str_line , 255 , file);
		if(inc < nbr_of_line+1)
		{

		}
		else
		{
			str2 = strcat(str_line , str);
		}
		inc++;
	}

	for(i=0 ; i<nbr_of_line ; i++)
	{
		if(i > nbr_of_line -n )
		printf("%c", str2[i]);
	}
		printf("\n\n");
		
}



void tail_cmd_f(FILE *file, int nbr_of_line , char *str_line , int n )
{
	int inc ,i ;
	inc=1;
			while(feof(file) != 1)
			{
				fgets(str_line , 255 , file);
				if(inc < nbr_of_line+1)
				{

				}
				else
				{
					printf("%s",str_line);			
				}
				inc++;
			}
				printf("\n");
				while(1);

}

void syntax_error(int argc , char * argv)
{
	if(argc == 1 )
	{
		fprintf(stderr , "Usage : %s [opt]  file  or %s file ...\n",argv ,argv);
		exit(EXIT_FAILURE);
	}
}

void display(char *arg)
{
	printf("=>%s<=\n",arg);
}
