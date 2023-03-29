#include <stdio.h>

char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void printBoard()
{
	printf("  %c  |  %c  |  %c\n",board[0], board[1], board[2]);
	printf("-----+-----+----\n");
	printf("  %c  |  %c  |  %c\n",board[3], board[4], board[5]);
	printf("-----+-----+----\n");
	printf("  %c  |  %c  |  %c\n",board[6], board[7], board[8]);
}

void addToBoard(int pos, char pc)
{
        if (board[pos] == ' ')
                board[pos] = pc;
        else
                puts("Not Empty x_o\n");
}


int checkStatus(char player)
{
        int i;

        if (board[0] == player && board[4] == player && board[8] == player)
                return 1;

        if (board[2] == player && board[4] == player && board[6] == player)
                return 1;

        for (i = 0; i < 7; i++)
        {
                if (i % 3 == 0)
                {
                        if (board[i] == player && board[i+1] == player && board[i+2] == player)
                                return (1);
                }
                
                if (i >= 0 && i <= 2)
                {
                        if (board[i] == player && board[i+3] == player && board[i+6] == player)
                                return 1;
                }
        }
        return 0;

}

int checkDraw()
{
        int i, count = 0;

        for (i = 0; i < 9; i++)
        {
                if (board[i] != ' ')
                        count++;
        }

        if (count == 9)
                return 33;

        return 0;        
}


