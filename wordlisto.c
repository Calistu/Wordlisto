#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include <wordlisto.h>

int main(int argc,char *argv[])
{
    setlocale(LC_ALL,"");

    if(exception(argc,argv))
      return 1;

    init();

    if(entradas())
      return 1;

    if(crialist())
      return 1;

    if(criar())
      return 1;

    return 0;
}
