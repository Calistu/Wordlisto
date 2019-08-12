int limpacr(char *buffer)
{
	int a=0,ascii=0;
	while((ascii=buffer[a])!='\n')
	{
		a++;
	}
	memset(&buffer[a],0,1);
	return 0;
}
