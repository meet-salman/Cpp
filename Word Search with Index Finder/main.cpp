#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str, newStr, search;
    vector<int> idxs = {};

    cout << "Enter your scentence: ";
    getline(cin, str);

    cout << "Enter what you want to search: ";
    getline(cin, search);

    // Converting str to LowerCase
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = (char)tolower(str[i]);
    }

    // Converting search to LowerCase
    for (int i = 0; i < search.length(); i++)
    {
        search[i] = (char)tolower(search[i]);
    }

    // Check if search is in str
    for (int i = 0; i < str.length(); i++)
    {
        newStr = "";

        if (str[i] == search[0])
        {
            for (int j = 0; j < search.length(); j++)
            {
                newStr += str[i + j];
            }
        }

        // Save index in array if word is avaiable
        if (newStr == search)
            idxs.push_back(i);
    }

    // List indexes where the word is
    if (idxs.size() > 0)
    {
        cout << "The word \"" << search << "\" is at Index: ";
        for (int i = 0; i < idxs.size(); i++)
        {
            cout << idxs[i] << ", ";
        }
    }
    else
    {
        cout << "There is no \"" << search << "\" in the scentence";
    }

    return 0;
}