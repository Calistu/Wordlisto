#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <entradas.h>
#include <limpacr.h>

int entradas(){
    int a = 0, b = 0;
    a = 0;
    system("cls||clear");
    printf("\nDados referentes ao proprietário da senha: \n");
    printf("\nPrimeiro nome do proprietário: ");
    fgets(nome, 20, stdin);
    limpacr(nome);
    printf("\nSobrenome do proprietário: ");
    fgets(sobrenome, 20, stdin);
    limpacr(sobrenome);
    printf("\nPrimeiro nome da Garota(o) com relação amorosa: ");
    fgets(crush, 20, stdin);
    limpacr(crush);
    printf("\nSobrenome da Garota(o) com relação amorosa: ");
    fgets(sobrenomecrush, 20, stdin);
    limpacr(sobrenomecrush);
    printf("\nNome do pet/animal do proprietário: ");
    fgets(pet, 20, stdin);
    limpacr(pet);
    printf("\nDigite um numero de telefone do proprietário\nNo padrão XXXXXXXX\n(sem IDs ou numeros especiais): ");
    fgets(numero, 12, stdin);
    limpacr(numero);
    sprintf(pparte, "%c%c%c", numero[0], numero[1], numero[2],numero[3]);
    sprintf(sparte, "%c%c%c%c", numero[4], numero[5], numero[6],numero[7]);
    sprintf(nnumero, "9%s", numero);
    printf("\nDigite outro numero de telefone do proprietário\nNo padrão XXXXXXXX\n(sem IDs ou numeros especiais): ");
    fgets(numero2, 12, stdin);
    limpacr(numero2);
    sprintf(pparte2, "%c%c%c%c", numero2[0], numero2[1], numero2[2], numero[3]);
    sprintf(sparte2, "%c%c%c%c", numero2[4], numero2[5], numero2[6],numero[7]);
    sprintf(nnumero2, "9%s", numero2);
    printf("\nDigite a data de nascimento do proprietário\nDeve seguir o padrão XX-XX-XXXX: ");
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

    printf("\nDigite o caminho para a criacao da wordlist EX: /home/user/Desktop/wordlist.txt\n: ");
    fgets(caminho,20,stdin);
    formatar_path(caminho);
    printf("Arquivo solicitado: %s\n",caminho);
    return 0;
}


int formatar_path(char *path){
  for(int cont=0;cont<strlen(path);cont++){
    if( !isalpha(path[cont]) ){
      path[cont] = '_';
    }
  }
}
