int exception(int argc,char *argv[]);

#define BINAR "wb"
#define TXT "w"

#define RD "r"
#define AP "a+"
#define WR "w" // replace with "a+" if want to imcrement wordlists with the same name.

extern void ini();

extern int err(char**argv,int pos);

extern void help();


extern struct custom_wordl
{
	int id;
	char *path;
}w_list[7];
