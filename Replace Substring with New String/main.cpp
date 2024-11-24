#include <iostream>
using namespace std;

int main()
{

    string str = "I love programming", subString = "love", replace = "enjoy", newStr = "";

    if (subString.length() > str.length())
    {
        cout << "Invalid Substring." << endl;
        return 0;
    }

    for (int i = 0; i < str.length() - subString.length(); i++)
    {
        bool isFound = false;
        if (str[i] == subString[0])
        {
            for (int j = 0; j < subString.length(); j++)
            {
                if (str[i + j] == subString[j])
                {
                    isFound = true;
                }
                else
                {
                    isFound = false;
                    break;
                }
            }
        }

        // Replacing if SubString is found
        if (isFound)
        {
            // // ------- Manually Replacing -------

            // Copying characters before substring
            for (int k = 0; k < i; k++)
            {
                newStr += str[k];
                // newStr = "I love "
            }

            // Append replace string
            for (int k = 0; k < replace.length(); k++)
            {
                newStr += replace[k];
                // newStr = "I love enjoy"
            }

            // Copying characters after substring
            for (int k = subString.length() + i; k < str.length(); k++)
            {
                newStr += str[k];
                // newStr = "I love enjoy programming"
            }
            cout << "Original: " << str << endl;
            cout << "Modified: " << newStr << endl;

            // // ------- Using built-in function -------

            // str.erase(str.begin() + i, str.begin() + i + subString.length());
            // str.insert(i, replace);
            // cout << str;

            break;
        }
    }

    return 0;
}