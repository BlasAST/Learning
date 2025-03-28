#ifndef GAME_H
#define GAME_H
int move_peon(char *pos)
{

}
int move_king(char *pos)
{

}
int move_queen(char *pos)
{

}
int move_alfil(char *pos)
{

}
int move_horse(char *pos)
{

}
int move_tower(char *pos)
{

}

void notify (wchar_t *strin)
{
        wprintf( L"%ls",strin);
}

wchar_t select_piece(int n,wchar_t matriz[8][8][3], wchar_t pieces[15], int yes)
{
    for (int i = 0; i < 15; i++)
    {
        if (yes)
        {
            if (i == n)
            {
                return pieces[i];
            }
        }
        else
        {
            wprintf(L" | ");
            wprintf(L"%d : %lc", i + 1, pieces[i]);
            wprintf(L" | ");
            if (i < 14)
            {
                wprintf(L"-");
            }
        }
        
    }
}

void move_player1(wchar_t matriz[8][8][3], wchar_t pieces[15])
{
    int n;
    print_tablero(matriz);
    notify(L"Jugador piezas blancas:\n\n");
    notify(L"Que ficha quieres mover?\n");
    select_piece(0, matriz, pieces, 0);
    scanf("%d", &n);
    select_piece(0, matriz, pieces, 1);
    pieces[9] = L' ';
}

void move_player2(wchar_t matriz[8][8][3], wchar_t pieces[15])
{
    int n;
    print_tablero(matriz);
    notify(L"Jugador piezas negras:\n\n");
    notify(L"Que ficha quieres mover?\n");
    select_piece(0, matriz, pieces, 0);
    scanf("%d", &n);
    select_piece(0, matriz, pieces, 1);
    pieces[9] = L' ';
}
#endif