#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char square[10]={'n', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int mark, num, num2, num3, playerno, i;
char mode, player1, player2, win;

void board()
{
	printf("\e[1;1H\e[2J");
    	printf("TicTacToe\nMade By SomeTroller77 in C\n\n\n");
    	printf(" Player 1 (%c) \t Player 2 (%c)  \n\n\n", player1, player2);
    	printf("     |     |     \n");
    	printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    	printf("_____|_____|_____\n");
    	printf("     |     |     \n");
    	printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    	printf("_____|_____|_____\n");
    	printf("     |     |     \n");
    	printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    	printf("     |     |     \n\n");
}

char checkwin()
{
	if(square[1] == square[2] && square[2] == square[3] && square[3] == 'X' || square[4] == square[5] && square[5] == square[6] && square[6] == 'X' || square[7] == square[8] && square[8] == square[9] && square[9] == 'X' || square[1] == square[4] && square[4] == square[7] && square[7] == 'X' || square[2] == square[5] && square[5] == square[8] && square[8] == 'X' || square[3] == square[6] && square[6] == square[9] && square[9] == 'X' || square[1] == square[5] && square[5] == square[9] && square[9] == 'X' || square[3] == square[5] && square[5] == square[7] && square[7] == 'X')
	{
		return 'X';
	}
	else if(square[1] == square[2] && square[2] == square[3] && square[3] == 'O' || square[4] == square[5] && square[5] == square[6] && square[6] == 'O' || square[7] == square[8] && square[8] == square[9] && square[9] == 'O' || square[1] == square[4] && square[4] == square[7] && square[7] == 'O' || square[2] == square[5] && square[5] == square[8] && square[8] == 'O' || square[3] == square[6] && square[6] == square[9] && square[9] == 'O' || square[1] == square[5] && square[5] == square[9] && square[9] == 'O' || square[3] == square[5] && square[5] == square[7] && square[7] == 'O')
        {
                return 'O';
        }
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
	{
        	return 'N';
	}
	else
	{
		return 'C';
	}
}

int randomnum()
{
	srand(time(0));
        num=rand();
        return num;
}

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

int main()
{
	num2=randomnum();
	num3=num2%2;
	win='C';
	printf("\e[1;1H\e[2J");
	printf("TicTacToe\nMade by SomeTroller77\n\nA)SinglePlayer\nB)MultiPlayer\n\nChoose An Option:");
	scanf("%c", &mode);
	if(mode == 'A' || mode == 'a')
	{
		while(win == 'C')
		{
			if(num3 == 0)
			{
				player1='X';
				player2='O';
			}
			else
			{
				player1='O';
				player2='X';
			}
			playerno=1;
			if(playerno == 1)
			{
				board();
				printf("Player 1: Enter a number:");
				scanf("%d", &i);
				if (i == 1 && square[1] == '1')
				{
           				 square[1] = player1;
        			}
				else if (i == 2 && square[2] == '2')
            			{
					square[2] = player1;
            			}
        			else if (i == 3 && square[3] == '3')
            			{
					square[3] = player1;
            			}
        			else if (i == 4 && square[4] == '4')
            			{
					square[4] = player1;
            			}
        			else if (i == 5 && square[5] == '5')
            			{
					square[5] = player1;
            			}
        			else if (i == 6 && square[6] == '6')
            			{
					square[6] = player1;
            			}
        			else if (i == 7 && square[7] == '7')
            			{
					square[7] = player1;
            			}
        			else if (i == 8 && square[8] == '8')
            			{
					square[8] = player1;
            			}
        			else if (i == 9 && square[9] == '9')
            			{
					square[9] = player1;
            			}
				else
				{
					printf("Invalid move");
					delay(1);
				}
				win=checkwin();
				if(win == 'C')
				{
					playerno++;
				}
                        	if(win == 'X' && player1 == 'X' || win == 'O' && player1 == 'O' )
                        	{
					board();
                                	printf("Player 1 won");
                                	return 0;
                        	}
                        	if(win == 'X' && player2 == 'X' || win == 'O' && player2 == 'O' )
                        	{
					board();
                                	printf("Player 2 won");
                                	return 0;
                        	}
                        	if(win == 'N')
                        	{
					board();
                                	printf("Game Draw");
                                	return 0;
                        	}
			}
			if(playerno == 2)
			{
				board();
				printf("Player 2: Enter a number:");
				scanf("%d", &i);
				if (i == 1 && square[1] == '1')
                        	{
                                 	square[1] = player2;
                        	}
                        	else if (i == 2 && square[2] == '2')
                        	{
                                	square[2] = player2;
                        	}
                        	else if (i == 3 && square[3] == '3')
                        	{
                                	square[3] = player2;
                        	}
                        	else if (i == 4 && square[4] == '4')
                        	{
                                	square[4] = player2;
                        	}
                        	else if (i == 5 && square[5] == '5')
                        	{
                                	square[5] = player2;
                        	}
                        	else if (i == 6 && square[6] == '6')
                        	{
                                	square[6] = player2;
                        	}
                        	else if (i == 7 && square[7] == '7')
                        	{
                                	square[7] = player2;
                        	}
                        	else if (i == 8 && square[8] == '8')
                        	{
                                	square[8] = player2;
                        	}
                        	else if (i == 9 && square[9] == '9')
                        	{
                                	square[9] = player2;
                        	}
                        	else
                        	{
                                	printf("Invalid move");
					delay(10);
                        	}
				win=checkwin();
				if(win == 'C')
                        	{
                                	playerno--;
                        	}
				if(win == 'X' && player1 == 'X' || win == 'O' && player1 == 'O' )
                		{
					board();
                        		printf("Player 1 won");
                        		return 0;
                		}
                		if(win == 'X' && player2 == 'X' || win == 'O' && player2 == 'O' )
                		{
					board();
                        		printf("Player 2 won");
                        		return 0;
                		}
                		if(win == 'N')
                		{
					board();
                        		printf("Game Draw");
                        		return 0;
                		}
			}

		}
	}
	else if(mode == 'B' || mode == 'b')
	{
		printf("Coming soon");
		return 0;
	}
	else
	{
		printf("Invalid option");
	}
	return 0;


}
