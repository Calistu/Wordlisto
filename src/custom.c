#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <custom.h>

int customizar()
{
	int ascii,num=0;
	char *word;
	FILE * nw_list;
	FILE * w_arq;

	word=malloc(sizeof(char*));
	w_list[0].path = ("db/SIMPLE");
	w_list[1].path = ("db/COMMON");
	w_list[2].path = ("db/MUSIC");
	w_list[3].path = ("db/TECH");
	w_list[4].path = ("db/SHOWS");
	w_list[5].path = ("db/ANIME");

	for(int cont=0;cont<=6;cont++)
	{
		if(w_list[cont].id==1)
		{
			if(w_list[cont].path!=NULL)
			{
				w_arq = fopen(w_list[cont].path,RD);
				if(w_arq==NULL)
				{
					printf("\nErro abrindo o arquivo de lista personalizada\n");
					printf("%s",strerror(errno));
					return 1;
				}
			}

			nw_list = fopen(caminho,AP);
			if(nw_list==NULL){
				printf("\nErro reabrindo wordlist principal\n");
				return 1;
			}

			memset(word,0,strlen(word));
			while((ascii = fgetc(w_arq))!=EOF)
			{
				if(ascii != '\n')
				{
					word[num] = ascii;
					num++;
				}
				else
				{
					for(int cont1=0;cont1<=16;cont1++)
					{
						fprintf(nw_list,"%s%s\n",word,list[cont1]);
						fprintf(nw_list,"%s%s\n",list[cont1],word);
						if(cont1<5)
						{

							//criar palavras maiusculas
							fprintf(nw_list,"%s%s\n",capital(word),list[cont1]);
							capital(word);
							fprintf(nw_list,"%s%s\n",word,capital(list[cont1]));
							capital(list[cont1]);
							fprintf(nw_list,"%s%s\n",list[cont1],capital(word));
							capital(word);
							fprintf(nw_list,"%s%s\n",capital(list[cont1]),word);
							capital(list[cont1]);
							fprintf(nw_list,"%s%s\n",capital(word),capital(list[cont1]));
							capital(word);
							capital(list[cont1]);
						}

						//evitar duplicações com as datas e telefones (não mudam com letras maiusculas/minusculas)
						else
						{
							fprintf(nw_list,"%s%s\n",word,list[cont1]);
							fprintf(nw_list,"%s%s\n",list[cont1],word);
							fprintf(nw_list,"%s%s\n",capital(word),list[cont1]);
							capital(word);
							fprintf(nw_list,"%s%s\n",list[cont1],capital(word));
							capital(word);
						}

						//criar palavras maiusculas com simbolos
						for(int simb = 33;simb<=47;simb++)
						{
							if(cont1<5)
							{
								fprintf(nw_list,"%s%c%s\n",capital(word),simb,list[cont1]);
								capital(word);
								fprintf(nw_list,"%s%c%s\n",word,simb,capital(list[cont1]));
								capital(list[cont1]);
								fprintf(nw_list,"%s%c%s\n",list[cont1],simb,capital(word));
								capital(word);
								fprintf(nw_list,"%s%c%s\n",capital(list[cont1]),simb,word);
								capital(list[cont1]);
								fprintf(nw_list,"%s%c%s\n",capital(word),simb,capital(list[cont1]));
								capital(word);
								capital(list[cont1]);
							}
							else
							{
								//feito para evitar duplicações com as datas e telefones (não mudam com letras maiusculas/minusculas)
								fprintf(nw_list,"%s%c%s\n",list[cont1],simb,word);
								fprintf(nw_list,"%s%c%s\n",word,simb,list[cont1]);
								fprintf(nw_list,"%s%c%s\n",list[cont1],simb,capital(word));
								capital(word);
								fprintf(nw_list,"%s%c%s\n",capital(word),simb,list[cont1]);
								capital(word);

							}
						}
					}
					memset(word,0,strlen(word));
					ascii = 0;
					num=0;
				}
			}
		}
	}
	fclose(w_arq);
	return 0;
}
