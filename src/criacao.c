#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <criacao.h>

int criar ()
{
    int a, b, ano, len;
    FILE *wordlist;
    wordlist = fopen (caminho, WR);
    if (wordlist == NULL)
    {
        printf ("\nCan't open a file, see the path that you want create\n");
        printf("I cant crete nothing here, plese use other folder to create it\n:'%s'\n",
         caminho);
        return 1;
    }
    for (a = 0; a <= 16; a++)
    {
        for (b = 16; b >= 0; b--)
        {
            if (a != b)
            {
                fprintf (wordlist, "%s%s\n", list[a], list[b]);
            }
        }
        fprintf (wordlist, "%s\n", list[a]);
    }
    for (a = 0; a <= 16; a++)
    {
        if (a != b)
        {
            fprintf (wordlist, "%s9%s\n", list[a], list[6]);
            fprintf (wordlist, "%s9%s\n", list[a], list[8]);
        }
    }
    for (ano = 2000; ano <= 2030; ano++)
    {
        for (a = 0; a <= 16; a++)
        {
            fprintf (wordlist, "%s%i\n", list[a], ano);
            fprintf (wordlist, "%i%s\n", ano, list[a]);
            fprintf (wordlist, "%s@%i\n", list[a], ano);
            fprintf (wordlist, "%i@%s\n", ano, list[a]);
            fprintf (wordlist, "%s.%i\n", list[a], ano);
            fprintf (wordlist, "%i.%s\n", ano, list[a]);
        }
    }
    for (a = 0; a <= 16; a++)
    {
        for (b = 16; b >= 0; b--)
        {
            if (a != b)
            {
                len = strlen (list[a]);
                for (int cont = 0; cont < len; cont++)
                {
                    fprintf (wordlist, "%c", insp (list[a][cont], CASE));
                }
                len = strlen (list[b]);
                for (int cont = 0; cont < len; cont++)
                {
                    fprintf (wordlist, "%c", insp (list[b][cont], CASE));
                }
                fprintf (wordlist, "\n");

                for (int simb = 33; simb <= 47; simb++)
                {
                    len = strlen (list[a]);
                    for (int cont = 0; cont < len; cont++)
                    {
                        fprintf (wordlist, "%c", insp (list[a][cont], CASE));
                    }
                    fprintf (wordlist, "%c", simb);
                    len = strlen (list[b]);
                    for (int cont = 0; cont < len; cont++)
                    {
                        fprintf (wordlist, "%c", insp (list[b][cont], CASE));
                    }
                    fprintf (wordlist, "\n");
                }
            }
        }
        len = strlen (list[a]);
        for (int cont = 0; cont < len; cont++)
        {
            fprintf (wordlist, "%c", insp (list[a][cont], CASE));
        }
        fprintf (wordlist, "\n");
    }
    for (a = 0; a <= 12; a++)
    {
        for (b = 12; b >= 0; b--)
        {
            for (int mem = 33; mem <= 47; mem++)
            {
                fprintf (wordlist, "%c%s%s\n", mem, list[a], list[b]);
                fprintf (wordlist, "%s%c%s\n", list[a], mem, list[b]);
                fprintf (wordlist, "%s%s%c\n", list[a], list[b], mem);
            }
        }
    }
    fclose (wordlist);
    custommer ();
    printf ("\nCreated on the File: %s\n", caminho);
    exit (0);
}
