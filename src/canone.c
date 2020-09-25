#include <stdio.h>
#include <canone.h>
#include <string.h>

int crialist()
{
    sprintf(data,"%s%s%s",dia,mes,ano);
    list[0] = strdup(nome);
    list[1] = strdup(sobrenome);
    list[2] = strdup(crush);
    list[3] = strdup(sobrenomecrush);
    list[4] = strdup(pet);
    list[5] = strdup(dia);
    list[6] = strdup(mes);
    list[7] = strdup(ano);
    list[8] = strdup(data);
    list[9] = strdup(pparte);
    list[10] = strdup(sparte);
    list[11] = strdup(pparte2);
    list[12] = strdup(sparte2);
    list[13] = strdup(numero);
    list[14] = strdup(nnumero);
    list[15] = strdup(numero2);
    list[16] = strdup(nnumero2);
    return 0;
}
