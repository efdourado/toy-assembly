#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "controle.h"

int main () {

    int n, registradores [32] = {0}, respostas [1001], print_qtd = 0, i_atual =0, i_exe = 0;

    scanf("%d", &n); //n = instruções (qtd)
    getchar ();

    char matriz_input [n][101];

//ler a entrada
    for (int i = 0; i < n; i ++) {

        fgets (matriz_input [i], sizeof (matriz_input [i]), stdin);
    }
    
//processar as instruções
    while (i_atual < n && i_exe < 100000) {

        CONTROLE (matriz_input [i_atual], registradores, respostas, &print_qtd, &i_atual, &i_exe);
    }

    system ("pause");
    
    return 0;
}