char entradas()
{
    int a = 0, b = 0;
    a = 0;
    system("cls||clear");
    printf("\nTYPE THE OWNER PASSWORD FIRST NAME: ");
    fgets(nome, 20, stdin);
    limpacr(nome);
    printf("\nTYPE THE OWNER PASSWORD SURNAME: ");
    fgets(sobrenome, 20, stdin);
    limpacr(sobrenome);
    printf("\nTYPE THE OWNER PASSWORD PARTNERS NAME: ");
    fgets(crush, 20, stdin);
    limpacr(crush);
    printf("\nTYPE THE OWNER PASSWORD PARTNERS SURNAME: ");
    fgets(sobrenomecrush, 20, stdin);
    limpacr(sobrenomecrush);
    printf("\nTYPE THE OWNER PASSWORD PET NAME: ");
    fgets(pet, 20, stdin);
    limpacr(pet);
    printf("\nTYPE A OWNER PASSWORD PHONE NUMBER\nRECOMMEND THIS DEFAULT XXXXXXXX\n(without IDs or especial numbers): ");
    fgets(numero, 12, stdin);
    limpacr(numero);
    sprintf(pparte, "%c%c%c", numero[0], numero[1], numero[2],numero[3]);
    sprintf(sparte, "%c%c%c%c", numero[4], numero[5], numero[6],numero[7]);
    sprintf(nnumero, "9%s", numero);
    printf("\nTYPE A OWNER PASSWORD OLD PHONE\nRECOMMEND THIS DEFAULT XXXXXXXX\n(without IDs or especial numbers): ");
    fgets(numero2, 12, stdin);
    limpacr(numero2);
    sprintf(pparte2, "%c%c%c%c", numero2[0], numero2[1], numero2[2], numero[3]);
    sprintf(sparte2, "%c%c%c%c", numero2[4], numero2[5], numero2[6],numero[7]);
    sprintf(nnumero2, "9%s", numero2);
    printf("\nTYPE THE OWNER PASSWORD BITH DAY\nSHOULD BE IN THIS DATE FORMAT XX-XX-XXXX: ");
    fgets(data, 12, stdin);
    limpacr(data);
    b = strlen(data);
    for (a = 0; a <= b; a++) {
        switch (a) {
        case 0:
            dia[0] = data[a];
            break;
        case 1:
            dia[1] = data[a];
            break;
        case 3:
            mes[0] = data[a];
            break;
        case 4:
            mes[1] = data[a];
            break;
        case 6:
            ano[0] = data[a];
            break;
        case 7:
            ano[1] = data[a];
            break;
        case 8:
            ano[2] = data[a];
            break;
        case 9:
            ano[3] = data[a];
            break;
        }
    }

    printf("\nTYPE THE WORDLIST CREATION PATH EX: /home/user/Desktop/wordlist.txt\nIF THE PATH IS HERE, TYPE ONLY THE NAME: ");
    scanf("%s", caminho);
    return 0;
}
