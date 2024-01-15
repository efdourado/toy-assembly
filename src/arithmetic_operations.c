#include <stdio.h>

void ADD (char matriz_input [], int registradores [])
{
    char x [3], y [3], z [3];

    if (sscanf (matriz_input, "ADD R%2s R%2s R%2s", x, y, z) == 3)
    {
        int x2, y2, z2;

        if (sscanf (x, "%d", &x2) == 1 && sscanf (y, "%d", &y2) == 1 && sscanf (z, "%d", &z2) == 1)  registradores [x2] = registradores [y2] + registradores [z2];
} }

void SUB (char matriz_input [], int registradores [])
{
    char x [3], y [3], z [3];

    if (sscanf (matriz_input, "SUB R%2s R%2s R%2s", x, y, z) == 3)
    {
        int x2, y2, z2;

        if (sscanf (x, "%d", &x2) == 1 && sscanf (y, "%d", &y2) == 1 && sscanf (z, "%d", &z2) == 1) registradores [x2] = registradores [y2] - registradores [z2];
} }

void MUL (char matriz_input [], int registradores [])
{
    char x [3], y [3], z [3];

    if (sscanf (matriz_input, "MUL R%2s R%2s R%2s", x, y, z) == 3)
    {
        int x2, y2, z2;

        if (sscanf (x, "%d", &x2) == 1 && sscanf (y, "%d", &y2) == 1 && sscanf (z, "%d", &z2) == 1) registradores [x2] = registradores [y2] * registradores [z2];
} }

void DIV (char matriz_input [], int registradores [])
{
    char x [3], y [3], z [3];

    if (sscanf (matriz_input, "DIV R%2s R%2s R%2s", x, y, z) == 3)
    {
        int x2, y2, z2;

        if (sscanf (x, "%d", &x2) == 1 && sscanf (y, "%d", &y2) == 1 && sscanf (z, "%d", &z2) == 1) registradores [x2] = registradores [y2] / registradores [z2];
} }

void MOD (char matriz_input [], int registradores [])
{
    char x [3], y [3], z [3];

    if (sscanf (matriz_input, "MOD R%2s R%2s R%2s", x, y, z) == 3)
    {
        int x2, y2, z2;
        
        if (sscanf (x, "%d", &x2) == 1 && sscanf (y, "%d", &y2) == 1 && sscanf (z, "%d", &z2) == 1) registradores [x2] = registradores [y2] % registradores [z2];
} }