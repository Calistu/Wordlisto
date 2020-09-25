int crialist();

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

#define CASE 1
#define BINAR "wb"
#define TXT "w"

#define RD "r"
#define AP "a+"
#define WR "w" // replace with "a+" if want to imcrement wordlists with the same name.

static struct custom_wordl
{
	int id;
	char *path;
}w_list[7];
