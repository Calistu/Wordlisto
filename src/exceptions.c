#include <stdio.h>
#include <string.h>
#include <exceptions.h>

int exception(int argc,char *argv[])
{
	int cont;
	for(cont=0;cont<argc;cont++)
	{
		w_list[cont].id=0;
	}
	if(argc<2)
	{
		ini();
		return 1;
	}
	else
	{
		for(cont=1;cont<argc;cont++)
		{
			if(argv[cont][0]=='-')
			{
				switch(argv[cont][1])
				{
					case 115:
						w_list[0].id=1;
						break;
					case 99:
						w_list[1].id=1;
						break;
					case 109:
						w_list[2].id=1;
						break;
					case 116:
						w_list[3].id=1;
						break;
					case 119:
						w_list[4].id=1;
						break;
					case 97:
						w_list[5].id=1;
						break;
					case 108:
						w_list[1].id=1;
						w_list[2].id=1;
						w_list[3].id=1;
						w_list[4].id=1;
						w_list[5].id=1;
						break;
					case 45:
						if(strcmp(argv[cont],"--help")==0)
						{
							help();
							return 1;
						}
						else
						if(strcmp(argv[cont],"--custom")==0)
						{
							w_list[6].id=1;
							if(argv[cont+1])
								w_list[6].path = strdup(argv[cont+1]);
							else{
								err(&argv[0],cont);
								return 1;
							}
							FILE*test;
							test=fopen(w_list[6].path,RD);
							if(test==NULL)
							{
								printf("\n   --custom: Não foi possível abrir lista personalizada\n\n");
								return 1;
							}
						}
						else
						{
							err(&argv[0],cont);
							return 1;
						}
						break;
					default:
						err(&argv[0],cont);
						return 1;
						break;
				}
			}
			else
			{
				err(&argv[0],cont);
				return 1;
			}
		}
	}
	return 0;
}
