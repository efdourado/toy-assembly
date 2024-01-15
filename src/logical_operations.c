/*conferimos a entrada e armazenamos os valores. Operamos 'i_atual' e 'i_exe' também mas, antes disso,
'BEQ' e 'BLT' comparam registradores*/

#include <stdio.h>

void JMP(char matriz_input[], int registradores[], int respostas[], int *print_qtd, int *i_atual, int *i_exe)
{
    int e; //ENDEREÇO
//conferimos se a entrada foi 'JMP e' e alteramos o fluxo do que seria a próxima intrução, sempre incrementando o número de instruções executadas
    if (sscanf(matriz_input, "JMP %d", &e) == 1)
    {
        (*i_atual) = e; (*i_exe) ++;
} }

void BEQ (char matriz_input [], int registradores [], int respostas [], int *print_qtd, int *i_atual, int *i_exe)
{
    int x, y, e;

    if (sscanf (matriz_input, "BEQ R%d R%d %d", &x, &y, &e) == 3)
    {
        if (registradores [x] == registradores [y])
        {
            (*i_atual) = e; (*i_exe) ++;
        }
        else
        {
            (*i_atual) ++; (*i_exe) ++;
} } }

void BLT(char matriz_input[], int registradores[], int respostas[], int *print_qtd, int *i_atual, int *i_exe)
{
    int x, y, e;
    
    if (sscanf (matriz_input, "BLT R%d R%d %d", &x, &y, &e) == 3)
    {
        if (registradores [x] < registradores [y])
        {
            (*i_atual) = e; (*i_exe) ++;
        }
        else
        {
            (*i_atual) ++; (*i_exe) ++;
} } }