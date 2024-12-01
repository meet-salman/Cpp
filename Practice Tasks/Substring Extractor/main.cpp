#include <iostream>
using namespace std;

int main()
{

    string str, subString;
    int start = 5, length = 7;

    cout << "Enter string: ";
    getline(cin, str);
    cout << "Enter starting point: ";
    cin >> start;
    cout << "Enter length of substring: ";
    cin >> length;

    if (start < str.length() && length <= str.length() - start && length > 0)
    {
        for (int i = start; i < start + length; i++)
        {
            subString += str[i];
        }
        cout << subString;
    }
    else
    {
        cout << "Enter starting < stringLength";
        cout << "and length = stringLength - startingPoint";
    }

    return 0;
}