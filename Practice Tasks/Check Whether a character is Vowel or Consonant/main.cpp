#include <iostream>
using namespace std;

int main()
{

    char letter;

    cout << "Enter a character:" << endl;
    cin >> letter;

    switch (letter)
    {
    case 'a':
        cout << letter << " is vovel";
        break;
    case 'e':
        cout << letter << " is vovel";
        break;
    case 'i':
        cout << letter << " is vovel";
        break;
    case 'o':
        cout << letter << " is vovel";
        break;
    case 'u':
        cout << letter << " is vovel";
        break;

    default:
        cout << letter << " is constant";
        break;
    }

    return 0;
}