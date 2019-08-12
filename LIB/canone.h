#define CASE 1
#define BINAR "wb"
#define TXT "w"
//pt br
char nome[20];
char sobrenome[20];
char crush[20];
char sobrenomecrush[20];
char pet[20];
char dia[20];
char mes[20];
char ano[20];
char numero[20];
char nnumero[20];
char pparte[20];
char sparte[20];
char numero2[20];
char nnumero2[20];
char pparte2[20];
char sparte2[20];
char data[20];
char  caminho[20];
char *list[17];
int posicao;
int crialist()
{
    sprintf(data,"%s%s%s",dia,mes,ano);
    list[0] = nome;
    list[1] = sobrenome;
    list[2] = crush;
    list[3] = sobrenomecrush;
    list[4] = pet;
    list[5] = dia;
    list[6] = mes;
    list[7] = ano;
    list[8] = data;
    list[9] = pparte;
    list[10] = sparte;
    list[11] = pparte2;
    list[12] = sparte2;
    list[13] = numero;
    list[14] = nnumero;
    list[15] = numero2;
    list[16] = nnumero2;
    return 0;
}
