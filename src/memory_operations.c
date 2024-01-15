#include <stdio.h>

void LOAD (char matriz_input [], int registradores [])
{
    char x [3], y [3];

    if (sscanf (matriz_input, "LOAD R%2s R%2s", x, y) == 2)
    {
        int x2, y2;
        if (sscanf (x, "%d", &x2) == 1 && sscanf (y, "%d", &y2) == 1)
        {
            registradores [x2] = registradores [y2];
} } }

void STORE (char matriz_input [], int registradores [])
{
    char x [3], y [3];

    if (sscanf (matriz_input, "STORE R%2s R%2s", x, y) == 2)
    {
        int x2, y2;
        if (sscanf (x, "%d", &x2) == 1 && sscanf (y, "%d", &y2) == 1)
        {
            registradores [y2] = registradores [x2];
} } }