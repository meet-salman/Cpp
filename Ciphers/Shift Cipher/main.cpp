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

map<char, char> create_substitution_map(int shift)
{
    map<char, char> substitutionMap;

    for (char c = 'A'; c <= 'Z'; c++)
    {
        char shiftedLetter = (((c - 'A') + shift) % 26) + 'A';
        substitutionMap[c] = shiftedLetter;
    }

    return substitutionMap;
}

string shift_cipher(string &text, int shift, map<char, char> &cipherMap)
{
    string cipherText = "";

    for (char &c : text)
    {
        if (c >= 'a' && c <= 'z')
            c = c - 'a' + 'A';

        if (c >= 'A' && c <= 'Z')
            cipherText += cipherMap[c];
        else if (c == ' ')
            cipherText += c;
        else
        {
            cout << "Invalid Character: " << c << endl;
            return 0;
        }
    }
    return cipherText;
}

int main()
{
    int shift;
    take_input("Enter shift: ", shift);
    shift = shift % 26;
    map<char, char> cipherMap = create_substitution_map(shift);

    string text;
    take_input("Enter text to encrypt: ", text);

    string cipherText = shift_cipher(text, shift, cipherMap);

    cout << "\nPlain: " << text << endl;
    cout << "Cipher: " << cipherText << endl;

    return 0;
}