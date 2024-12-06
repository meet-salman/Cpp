#include <iostream>
using namespace std;

int game[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

bool isWin = false, isTie = false;

bool checkGame()
{

    if (game[0][0] == game[0][1] == game[0][2] ||
        game[1][0] == game[1][1] == game[1][2] ||
        game[2][0] == game[2][1] == game[2][2])
    {
        isWin = true;
    }
    return isWin;
}

void placeMove(int move, string player)
{

    if (move >= 1 && move <= 9)
    {
        if (move >= 1 || move <= 3)
        {
            (player == "X" ? game[0][move - 1] = 00 : game[0][move - 1] = 11);
        }
        else if (move >= 4 || move <= 6)
        {
            (player == "X" ? game[0][move - 1] = 00 : game[0][move - 1] = 11);
        }
        else
        {
            (player == "X" ? game[0][move - 1] = 00 : game[0][move - 1] = 11);
        }
    }
    else
    {
        cout << "Invalid Move.";
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (game[i][j] == 00)
            {
                cout << "X" << " ";
            }
            else if (game[i][j] == 11)
            {
                cout << "O" << " ";
            }
            else
            {
                cout << game[i][j] << " ";
            }
        }
        cout << endl;
    }

    if (checkGame())
    {
        cout << "WIN ";
    }
}

bool ticTacToe()
{
    string player = "X";

    int move;

    while (!isWin)
    {
        if (player == "X")
        {
            cout << "Player " << player << ": ";
            cin >> move;

            placeMove(move, player);
            player = "O";
        }
        else
        {
            cout << "Player " << player << ": ";
            cin >> move;

            placeMove(move, player);
            player = "X";
        }
    }
}

int main()
{

    ticTacToe();

    return 0;
}