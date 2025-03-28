#ifndef PLAYER_H
#define PLAYER_H
#include "asce.h"

typedef struct Movements
{
    char last_move[10];
    struct Movements *move; 
}Movements;

typedef struct Player
{
    char color;
    Movements *movi;
} Player;

int select_color()
{
    int respuesta;
    wprintf(L"Indica que fichas quieres ser:\n");
    wprintf(L"1. Blancas\n");
    wprintf(L"2. Negras\n");
    scanf("%d", &respuesta);
    return (respuesta);
}
#endif