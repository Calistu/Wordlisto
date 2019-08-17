int custommer()
{
	int ascii,num=0;
	char *word;
	word=malloc(sizeof(char*));
	FILE * nw_list;
	FILE * w_arq;
	#ifdef linux
	w_list[0].path = ("/usr/share/wordlisto/DB/SIMPLE");
	w_list[1].path = ("/usr/share/wordlisto/DB/COMMON");
	w_list[2].path = ("/usr/share/wordlisto/DB/MUSIC");
	w_list[3].path = ("/usr/share/wordlisto/DB/TECH");
	w_list[4].path = ("/usr/share/wordlisto/DB/SHOWS");
	w_list[5].path = ("/usr/share/wordlisto/DB/ANIME");	
	#elif defined (_WIN32) || defined (WIN32)
	w_list[0].path = ("DB/SIMPLE");
	w_list[1].path = ("DB/COMMON");
	w_list[2].path = ("DB/MUSIC");
	w_list[3].path = ("DB/TECH");
	w_list[4].path = ("DB/SHOWS");
	w_list[5].path = ("DB/ANIME");	
	#endif
	for(int cont=0;cont<=6;cont++)
	{
		if(w_list[cont].id==1)
		{
			if(w_list[cont].path!=NULL)
			{
				w_arq = fopen(w_list[cont].path,RD);
				if(w_arq==NULL)
				{
					printf("\nError openin the custom wordlist\n");
					exit(1);
				}
			}
			nw_list = fopen(caminho,AP);
			if(nw_list==NULL)
			{
				printf("\nError reopenin the main wordlist\n");
				exit(1);
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
							//create words with capital 
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
						//avoidin duplications cause the numbers after list[4]
						else
						{
							fprintf(nw_list,"%s%s\n",word,list[cont1]);
							fprintf(nw_list,"%s%s\n",list[cont1],word);	
							fprintf(nw_list,"%s%s\n",capital(word),list[cont1]);
							capital(word);
							fprintf(nw_list,"%s%s\n",list[cont1],capital(word));
							capital(word);
						}
						//create words with capital and simbols
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
							//same that line 69
							else
							{
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
