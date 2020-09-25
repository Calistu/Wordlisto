int custommer();

#define BINAR "wb"
#define TXT "w"

#define RD "r"
#define AP "a+"
#define WR "w" // replace with "a+" if want to imcrement wordlists with the same name.

extern char *list[17];

extern char  caminho[20];

extern char* capital(char *word);

extern struct custom_wordl
{
	int id;
	char *path;
}w_list[7];
