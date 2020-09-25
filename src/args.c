#include <stdio.h>
#include <string.h>
#include <args.h>

void ini()
{
	banner();
	printf("\n                                ./wordlisto --help\n");
	return ;
}

int err(char**argv,int pos)
{
	if(strcmp(argv[pos-1],"--custom")!=0)
	{
		printf("\n\n                             argument %s unrecognized",argv[pos]);
		ini();
		return 1;
	}
	else
	return 0;
}

void help()
{
	printf("\n================== WORDLISTO beta - (C) 2019\n");
	printf("||  Wordlisto   || Tela de Ajuda:\n");
	printf("||  por Calistu ||\n");
	printf("||              ||\n");
	printf("||  ~~~~~~      || Uso: ./wordlisto \n");
	printf("||  ~~          || [-s -c -m -t -w -a || --custom <path> --help]\n");
	printf("||  ~~~~        || Gerador de wordlists com base em wordlists simples e personalizadas\n");
	printf("||  ~~~~        ||\n");
	printf("==================\n");
	printf("\n");
	printf("==================\nOpções de Argummentos:\n");
	printf("-s <simple>: Sem integração com listas externas\n");
	printf("-c <common>: Lista de palavras comuns integradas com as entradas\n");
	printf("-m <music>: Integração com palavras no mundo da música\n");
	printf("-t <tech>: Integração com questões de tecnologia\n");
	printf("-w <shows>: Integração com filmes e programas de tv\n");
	printf("-a <anime>: Integração usando palavras em animes e desenhos animados\n");
	printf("-l <all>: Inclui todos os argumentos anteriores\n\n");
	printf("--custom: Use uma lista de palavras próprias\n");
	printf("--help: Exibir esta tela de ajuda\n");
	printf("\n");
	printf("Exemplos: ./Wordlisto -t --custom minhawordlist.txt\n");
	printf("          ./Wordlisto -a\n");
	return ;
}
