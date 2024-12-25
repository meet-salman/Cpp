#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    char symbols[] = "0123456789~!@#$%^&*()_+={}[]\?/<>AaBbCcDdEeFfGgHhIiJjKkLlMmOoPpQqRrSsTtUuVvWwXxYyZz";
    string password = "", strength;

    int length;
    cout << "Enter Length of Password: ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        int randomNum = rand() % 84;

        password += symbols[randomNum];
    }

    if (password.length() < 8)
    {
        strength = "Weak";
    }
    else if (password.length() >= 8 && password.length() <= 10)
    {
        strength = "Strong";
    }
    else if (password.length() >= 11 && password.length() <= 15)
    {
        strength = "Very Strong";
    }
    else
    {
        strength = "Very Long -> Not Good";
    }

    cout << "Password Generated: " << password << endl;
    cout << "Your Password is " << strength << endl;

    return 0;
}