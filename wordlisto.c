#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "LIB/macros.h"
int main(int argc,char *argv[])
{
    setlocale(LC_ALL,"");
    exception(argc,&argv[0]);
    init();
    entradas();
    crialist();
    criar();
    return 0;
}
