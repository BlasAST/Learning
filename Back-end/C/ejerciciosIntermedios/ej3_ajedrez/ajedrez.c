#include "tablero.h"
#include "game.h"
#include "player.h"
#include "asce.h"

wchar_t matriz[8][8][3] = {0};
Player *player1;
Player *player2;
wchar_t pieces_white[15] = {L'♟',L'♟',L'♟',L'♟',L'♟',L'♟',L'♟',L'♟',L'♚',L'♛',L'♝',L'♝',L'♞',L'♞',L'♜'};
wchar_t pieces_black[15] = {L'♙',L'♙',L'♙',L'♙',L'♙',L'♙',L'♙',L'♙',L'♔',L'♕',L'♗',L'♗',L'♘',L'♘',L'♖'};

void game(Player *player1, Player *player2, wchar_t whites[15], wchar_t blacks[15])
{
    notify(L"Comienzan los blancos\n");
    while (pieces_white[9] == L'♛' || pieces_black[9] == L'♔')
    {
        move_player1(matriz, whites);
        move_player2(matriz, blacks);
    }
    
}

void select_players()
{
    player1 = (Player *)malloc(sizeof(Player));
    player1->movi = NULL;
    player2 = (Player *)malloc(sizeof(Player));
    player2->movi = NULL;
    if (select_color() == 0)
        {
            player1->color = 'W';
            player2->color = 'B';
            game(player1, player2, pieces_white, pieces_black);
        }
        else
        {
            player1->color = 'B';
            player2->color = 'W';
            game(player2, player1, pieces_white, pieces_black);
        }
}

int main(int args, char **argv)
{
    int select;

    select = 0;
    setlocale(LC_ALL, "");
    if (args == 1)
    {
        fill_tablero(matriz);
        show_positions(matriz);
        generate_pieces(matriz);
        print_tablero(matriz);
        select_players();
    }
    else
        write(1, "Introduce un solo parametro", 27);
}