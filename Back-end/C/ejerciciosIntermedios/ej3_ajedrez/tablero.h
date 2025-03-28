#ifndef TABLERO_H
#define TABLERO_H
#include "asce.h"

void fill_tablero(wchar_t matriz[8][8][3])
{
    for (int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            matriz[i][j][0] = L' ';
            matriz[i][j][1] = L' ';
        }
    }
}
void    generate_pieces(wchar_t matriz[8][8][3])
{
    int i;
    int j;

    i = 0;
    while(i < 8)
    {
        matriz[i][1][0] =  L'♟';
        matriz[i][6][0] =  L'♙';
        matriz[i][1][1] =  L'\0';
        matriz[i][6][1] =  L'\0';
        i++;
    }
    // Reyes
    matriz[4][0][0] =  L'♚';
    matriz[4][7][0] =  L'♔';
    // Reinas
    matriz[3][0][0] =  L'♛';
    matriz[3][7][0] =  L'♕';
    // Alfiles
    matriz[2][0][0] =  L'♝';
    matriz[5][0][0] =  L'♝';
    matriz[2][7][0] =  L'♗';
    matriz[5][7][0] =  L'♗';
    // Caballos
    matriz[1][0][0] =  L'♞';
    matriz[6][0][0] =  L'♞';
    matriz[1][7][0] =  L'♘';
    matriz[6][7][0] =  L'♘';
    // Torres
    matriz[0][0][0] =  L'♜';
    matriz[7][0][0] =  L'♜';
    matriz[0][7][0] =  L'♖';
    matriz[7][7][0] =  L'♖';

    // Reyes
    matriz[4][0][1] = L'\0';
    matriz[4][7][1] = L'\0';
    // Rein1s
    matriz[3][0][1] = L'\0';
    matriz[3][7][1] = L'\0';
    // Alfil1s
    matriz[2][0][1] = L'\0';
    matriz[5][0][1] = L'\0';
    matriz[2][7][1] = L'\0';
    matriz[5][7][1] = L'\0';
    // Caball1s
    matriz[1][0][1] = L'\0';
    matriz[6][0][1] = L'\0';
    matriz[1][7][1] = L'\0';
    matriz[6][7][1] = L'\0';
    // Torr1s
    matriz[0][0][1] = L'\0';
    matriz[7][0][1] = L'\0';
    matriz[0][7][1] = L'\0';
    matriz[7][7][1] = L'\0';

}
void show_positions(wchar_t matriz[8][8][3])
{
    int j;
    int i;

    i = 0;
    while (i < 8)
    {
        j = 0;
        while (j < 8)
        {
                matriz[i][j][0] = j + L'a';
                matriz[i][j][1] = i + 1 + L'0';
                matriz[i][j][2] = L'\0';
            j++;
        }
        i++;
    }
}
void print_tablero(wchar_t matriz[8][8][3])
{
    int j;
    int i;

    i = 0;
    while (i < 8)
    {
        j = 0;
        while (j < 8)
        {
            add_space_x();
            wprintf(L"%ls",matriz[i][j]);
            add_space_x();
            j++;
        }
        add_space_y();
        i++;
    }
}
#endif