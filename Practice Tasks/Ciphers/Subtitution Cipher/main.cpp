#include <bits/stdc++.h>
using namespace std;

template <typename T>
void take_input(const string msg, T &val)
{
    cout << msg;
    getline(cin, val);
}

map<char, char> create_substitution_map()
{
    map<char, char> substitutionMap;

    substitutionMap['a'] = 'F';
    substitutionMap['b'] = 'G';
    substitutionMap['c'] = 'N';
    substitutionMap['d'] = 'E';
    substitutionMap['e'] = 'A';
    substitutionMap['f'] = 'T';
    substitutionMap['g'] = 'X';
    substitutionMap['h'] = 'Z';
    substitutionMap['i'] = 'O';
    substitutionMap['j'] = 'I';
    substitutionMap['k'] = 'Q';
    substitutionMap['l'] = 'B';
    substitutionMap['m'] = 'H';
    substitutionMap['n'] = 'K';
    substitutionMap['o'] = 'Y';
    substitutionMap['p'] = 'W';
    substitutionMap['q'] = 'V';
    substitutionMap['r'] = 'C';
    substitutionMap['s'] = 'P';
    substitutionMap['t'] = 'J';
    substitutionMap['u'] = 'L';
    substitutionMap['v'] = 'S';
    substitutionMap['w'] = 'D';
    substitutionMap['x'] = 'M';
    substitutionMap['y'] = 'U';
    substitutionMap['z'] = 'R';

    return substitutionMap;
}

int main()
{

    map<char, char> cipherMap = create_substitution_map();

    string text,
        cipherText = "";
    take_input("Enter text to encrypt: ", text);

    for (char &c : text)
    {
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';

        if (c >= 'a' && c <= 'z')
            cipherText += cipherMap[c];
        else if (c == ' ')
            cipherText += c;
        else
        {
            cout << "Invalid Character: " << c << endl;
            return 1;
        }
    }

    cout << "Plain: " << text << endl;
    cout << "Cipher: " << cipherText << endl;

    return 0;
}