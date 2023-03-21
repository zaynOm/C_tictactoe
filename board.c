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
        for (i = 0; i < 9; i+3)
        {
                puts("this is for loop");
                if ((board[i] == board[i+1] == board[i+2]) == player)
                {
                        printf("%c %c %c", board[i], board[i+1], board[i+2]);
                        return (1);
                }
                
        }

}


