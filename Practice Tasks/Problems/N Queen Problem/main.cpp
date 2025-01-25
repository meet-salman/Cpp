#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    char chess[4][4] = {
        {46, 46, 46, 46},
        {46, 46, 46, 46},
        {46, 46, 46, 46},
        {46, 46, 46, 46}};

    int positions[4], queen = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            int position = 1 + (rand() % 2),
                prevPos;

            if (queen == 0)
            {
                chess[i][position] = 81;
                positions[queen] = position;
                queen++;
            }
            else
            {
                bool find = false;
                while (!find)
                {
                    position = rand() % 4;

                    for (int i = 0; i < queen; i++)
                    {
                        if (positions[i] != position && !(position == prevPos - 1) && !(position == prevPos + 1))
                        {
                            find = true;
                        }
                        else
                        {
                            find = false;
                            break;
                        }
                    }
                }
                chess[i][position] = 81;
                positions[queen] = position;
                queen++;
            }
            prevPos = position;
        }
    }

    // Display Chess
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << chess[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}