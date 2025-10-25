#include <bits/stdc++.h>
using namespace std;

template <typename T>
void take_input(const string &msg, T &val)
{
    cout << msg;

    if constexpr (is_same_v<T, string>)
    {
        if (cin.peek() == '\n')
            cin.ignore();
        getline(cin, val);
    }
    else
    {
        cin >> val;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid input");
    }
}

map<char, char> createMap1()
{
    map<char, char> M1;

    M1['a'] = 'K';
    M1['b'] = 'D';
    M1['c'] = 'N';
    M1['d'] = 'H';
    M1['e'] = 'P';
    M1['f'] = 'A';
    M1['g'] = 'W';
    M1['h'] = 'X';
    M1['i'] = 'C';
    M1['j'] = 'Z';
    M1['k'] = 'I';
    M1['l'] = 'M';
    M1['m'] = 'Q';
    M1['n'] = 'J';
    M1['o'] = 'B';
    M1['p'] = 'Y';
    M1['q'] = 'E';
    M1['r'] = 'T';
    M1['s'] = 'U';
    M1['t'] = 'G';
    M1['u'] = 'V';
    M1['v'] = 'R';
    M1['w'] = 'F';
    M1['x'] = 'O';
    M1['y'] = 'S';
    M1['z'] = 'L';

    return M1;
}

map<char, char> createMap2()
{
    map<char, char> M2;

    M2['a'] = 'P';
    M2['b'] = 'A';
    M2['c'] = 'G';
    M2['d'] = 'U';
    M2['e'] = 'K';
    M2['f'] = 'H';
    M2['g'] = 'J';
    M2['h'] = 'B';
    M2['i'] = 'Y';
    M2['j'] = 'D';
    M2['k'] = 'S';
    M2['l'] = 'O';
    M2['m'] = 'E';
    M2['n'] = 'M';
    M2['o'] = 'Q';
    M2['p'] = 'N';
    M2['q'] = 'W';
    M2['r'] = 'F';
    M2['s'] = 'Z';
    M2['t'] = 'I';
    M2['u'] = 'T';
    M2['v'] = 'C';
    M2['w'] = 'V';
    M2['x'] = 'L';
    M2['y'] = 'X';
    M2['z'] = 'R';

    return M2;
}

map<char, char> createMap3()
{
    map<char, char> M3;

    M3['a'] = 'J';
    M3['b'] = 'M';
    M3['c'] = 'F';
    M3['d'] = 'Z';
    M3['e'] = 'R';
    M3['f'] = 'N';
    M3['g'] = 'L';
    M3['h'] = 'D';
    M3['i'] = 'O';
    M3['j'] = 'W';
    M3['k'] = 'G';
    M3['l'] = 'I';
    M3['m'] = 'A';
    M3['n'] = 'K';
    M3['o'] = 'E';
    M3['p'] = 'S';
    M3['q'] = 'U';
    M3['r'] = 'C';
    M3['s'] = 'Q';
    M3['t'] = 'V';
    M3['u'] = 'H';
    M3['v'] = 'Y';
    M3['w'] = 'X';
    M3['x'] = 'T';
    M3['y'] = 'P';
    M3['z'] = 'B';

    return M3;
}

string polyalphabetic_cipher(string &text, map<char, char> &M1, map<char, char> &M2, map<char, char> &M3)
{
    string cipherText = "";

    int map = 1;
    for (char &c : text)
    {
        if (c >= 65 && c <= 97)
            c = c - 'A' + 'a';

        if (c == ' ')
            cipherText += c;
        else
        {
            if (map == 1)
                cipherText += M1[c];
            else if (map == 2)
                cipherText += M2[c];
            else if (map == 3)
                cipherText += M3[c];

            map++;
        }

        if (map > 3)
            map = 1;
    }

    return cipherText;
}

int main()
{

    map<char, char> M1 = createMap1(),
                    M2 = createMap2(),
                    M3 = createMap3();

    string text;
    take_input("Enter text to encrypt: ", text);

    string cipherText = polyalphabetic_cipher(text, M1, M2, M3);

    cout << "\nPlain: " << text << endl;
    cout << "Cipher: " << cipherText << endl;

    return 0;
}