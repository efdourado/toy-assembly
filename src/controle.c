#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arithmetic_operations.h"
#include "logical_operations.h"
#include "memory_operations.h"

void CONTROLE (char matriz_input [], int registradores [], int respostas [], int *print_qtd, int *i_atual, int *i_exe)
{
    if (strncmp (matriz_input, "MOV", 3) == 0)
    {
        int inte; char x [3], y [3];

        if (sscanf (matriz_input, "MOV R%2s %d", x, &inte) == 2)
        {
            int x2;
            if (sscanf (x, "%d", &x2) == 1)
            {
                registradores [x2] = inte;
            }
        }

        else if (sscanf (matriz_input, "MOV R%2s R%2s", x, y) == 2)
        {
            int x2, y2;
            if (sscanf (x, "%d", &x2) == 1 && sscanf (y, "%d", &y2) == 1)
            {
                registradores [x2] = registradores [y2];
            }
        }
        (*i_exe) ++; (*i_atual) ++;
    }

    else if (strncmp (matriz_input, "STORE", 5) == 0)
    {
        STORE (matriz_input, registradores);
        (*i_exe) ++; (*i_atual) ++;
    }
    else if (strncmp (matriz_input, "LOAD", 4) == 0)
    {
        LOAD (matriz_input, registradores);
        (*i_exe) ++; (*i_atual) ++;
    }

    else if (strncmp (matriz_input, "ADD", 3) == 0)
    {
        ADD (matriz_input, registradores);
        (*i_exe) ++; (*i_atual) ++;
    }
    else if (strncmp (matriz_input, "SUB", 3) == 0)
    {
        SUB (matriz_input, registradores);
        (*i_exe) ++; (*i_atual) ++;
    }
    else if (strncmp (matriz_input, "MUL", 3) == 0)
    {
        MUL (matriz_input, registradores);
        (*i_exe) ++; (*i_atual) ++;
    }
    else if (strncmp (matriz_input, "DIV", 3) == 0)
    {
        DIV (matriz_input, registradores);
        (*i_exe) ++; (*i_atual) ++;
    }    
    else if (strncmp (matriz_input, "MOD", 3) == 0)
    {
        MOD (matriz_input, registradores);
        (*i_exe) ++; (*i_atual) ++;
    }
    
    else if (strncmp (matriz_input, "PRINT", 5) == 0)
    {
        char x [3];

        if (sscanf (matriz_input, "PRINT R%2s", x) == 1)
        {
            int x2;

            if (sscanf (x, "%d", &x2) == 1)
            {
                respostas [*print_qtd] = registradores [x2];
            
                (*print_qtd) ++;
            }
        }
        (*i_exe) ++; (*i_atual) ++;
    }
    
    else if (strncmp (matriz_input, "EXIT", 4) == 0)
    {
        for (int i = 0; i < *print_qtd; i ++)
        {
            printf ("%d\n", respostas [i]);
        }
        (*i_exe) ++; (*i_atual) ++;
    }
    
    else if (strncmp (matriz_input, "BEQ", 3) == 0) BEQ (matriz_input, registradores, respostas, print_qtd, i_atual, i_exe);
    else if (strncmp (matriz_input, "BLT", 3) == 0) BLT (matriz_input, registradores, respostas, print_qtd, i_atual, i_exe);
    else if (strncmp (matriz_input, "JMP", 3) == 0) JMP (matriz_input, registradores, respostas, print_qtd, i_atual, i_exe);
}