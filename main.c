#include <stdio.h>
#include <stdlib.h>
#include "board.h"

int main(void)
{
        char player1 = '0';
        char player2;

        puts("Chose X or O");

        while (!(player1 == 'X' || player1 == 'O'))
        {
                scanf(" %c", &player1);
                
                if (player1 == 'q' || player1 == 'Q')
                       exit(-1);
        }
        
        puts("Choose a number from 1 to 9");

        if (player1 == 'X')
                player2 = 'O';
        else 
                player2 = 'X';

        int pos;
        int played = 0;

        while (1)
        {

                puts("Enter a pos");
                scanf(" %d", &pos);
                if (!(0 < pos && pos < 10))
                {
                        puts("Position out of range");
                        continue;
                 }
                
                if (played == 0)
                {
                        addToBoard (pos - 1, player1);
                        played = 1;
                }
                else
                {
                        addToBoard(pos - 1, player2);
                        played = 0;
                }
                printBoard();
                
                if (checkStatus(player1) == 1)
                {
                        printf("Player %c won\n", player1);
                        break;
                }
                
                else if (checkStatus(player2) == 1)
                {
                        printf("Player %c won\n", player2);
                        break;
                }

        }
	return (0);
}
