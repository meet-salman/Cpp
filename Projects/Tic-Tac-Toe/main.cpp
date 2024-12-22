#include <iostream>
using namespace std;

char game[3][3] = {
    {48, 49, 50},
    {51, 52, 53},
    {54, 55, 56}};
int turn = 0;
char choice;
char player = 'X';
bool win = false,
     isValid = false;

void displayGame()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << game[i][j] << " ";
        }
        cout << endl;
    }
}

void isWin()
{
    if ((game[0][0] == game[0][1] && game[0][1] == game[0][2]) ||
        (game[1][0] == game[1][1] && game[1][1] == game[1][2]) ||
        (game[2][0] == game[2][1] && game[2][1] == game[2][2]) ||
        (game[0][0] == game[1][0] && game[1][0] == game[2][0]) ||
        (game[0][1] == game[1][1] && game[1][1] == game[2][1]) ||
        (game[0][2] == game[1][2] && game[1][2] == game[2][2]) ||
        (game[0][0] == game[1][1] && game[1][1] == game[2][2]) ||
        (game[0][2] == game[1][1] && game[1][1] == game[2][0]))
    {
        cout << "Player (" << player << ") Wins" << endl;
        win = true;
    }
    else
    {
        win = false;
    }
}

void ticTacToe()
{

    while (!win)
    {
        displayGame();

        if (turn == 9)
        {
            cout << "Game Over!";
            return;
        }

        cout << "Player (" << player << "): ";
        cin >> choice;
        if (choice < 0 || choice > 9)
        {
            isValid = false;
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (game[i][j] == choice)
                {
                    if (player == 'X')
                    {
                        game[i][j] = 88;
                        player = 'O';
                    }
                    else
                    {
                        game[i][j] = 79;
                        player = 'X';
                    }

                    isWin();

                    if (win)
                    {
                        break;
                        return;
                    }
                    else
                    {
                        cout << "Chlaaa" << endl;
                        turn++;
                        ticTacToe();
                    }
                }
            }
        }
        if (!isValid)
            cout << "Invalid Choice" << turn << endl;
    }
}

int main()
{

    ticTacToe();

    return 0;
}