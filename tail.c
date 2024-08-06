#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "tailheaders.h"


int main(int argc , char *argv[])
{ 
	int n , ar_t_num, line;
	char parametre[100];
    char *string[1000000];
    int i;
	FILE *file;
    syntax_error(argc , argv[0]);
    if((strcmp(argv[1] , "-n") == 0))
        {
            n = atoi(argv[2]);
        for(i=2 ; i< argc-1 ; i++)
        {
            open(&file ,argv[i+1]);
            line = count_line(file , parametre , n);
            open(&file ,argv[i+1]);
            tail_cmd(file ,line , parametre ,n);
                }
        }



    else if((strcmp(argv[1] , "-c") == 0))
        {
        n = atoi(argv[2]);
        for(i=2 ; i< argc-1 ; i++)
        {
            open(&file ,argv[i+1]);
            line = count_line(file , parametre , n);
            open(&file ,argv[i+1]);
            tail_cmd_c(file ,line , parametre ,n);
            }
        }

    else if((strcmp(argv[1] , "-v") == 0))
       {
        for(i=2 ; i< argc-1 ; i++)
        {
        open(&file ,argv[i]);
        display(argv[i]);
        line = count_line(file , parametre , 10);
        open(&file ,argv[i]);
        tail_cmd(file ,line , parametre ,10);
            }
       }

    else if((strcmp(argv[1] , "-q") == 0))
    {
        for(i=2 ; i< argc ; i++)
        {
        open(&file ,argv[i]);
        line = count_line(file , parametre , 10);
        open(&file ,argv[i]);
        tail_cmd(file ,line , parametre ,10);
        }
    }  


    else if((strcmp(argv[1] , "-f") == 0) || (strcmp(argv[1] , "-F") == 0))
    {
        for(i=2 ; i< argc ; i++)
        {
        open(&file ,argv[i]);
        line = count_line(file , parametre , 10);
        open(&file ,argv[i]);
        tail_cmd_f(file ,line , parametre ,10);
        }
    }  




    else if((strcmp(argv[1] , "-n") != 0) || (strcmp(argv[1] , "-v") != 0) || (strcmp(argv[1] , "-q") != 0) || (strcmp(argv[1] , "-c") != 0))
    {
        for(i=1 ; i< argc ; i++)
        {
        open(&file ,argv[i]);
        line = count_line(file , parametre , 10);
        open(&file ,argv[i]);
        tail_cmd(file ,line , parametre ,10);
        }
    }
        return (0);
	}
