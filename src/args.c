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
	printf("||  Wordlisto   || Helper Screen:\n");
	printf("||  by Calistu  ||\n");
	printf("||              ||\n");
	printf("||  ~~~~~~      || Usage: ./wordlisto \n");
	printf("||  ~~          || [-s -c -m -t -w -a || --custom <path> --help]\n");
	printf("||  ~~~~        ||\n");
	printf("||  ~~~~        ||\n");
	printf("==================\nArgumments Options:\n");
	printf("-s <simple>: without a integration's wordlist\n");
	printf("-c <common>: common words wordlist integrate with the inputs\n");
	printf("-m <music>: integration with music\n");
	printf("-t <tech>: integration with tech affair\n");
	printf("-w <shows>: intergration with movies and tv shows\n");
	printf("-a <anime>: integration using words in animes and cartoons\n");
	printf("-l <all>: include all the previous arguments\n\n");
	printf("--custom: use a self wordlist\n");
	printf("--help: display this usage screen\n");
	return ;
}
