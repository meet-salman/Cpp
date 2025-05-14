
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Function to generate binaries
string decToBin(int num)
{
    if (num == 0)
        return "0";

    string b;
    while (num > 0)
    {
        int bit = num % 2;

        // Add '0' to convert the bit into char
        b += bit + '0';
        num /= 2;
    }

    // reversing the generated binary - LSB-first
    reverse(b.begin(), b.end());
    return b;
}

int main()
{
    int start,
        end;
    cin >> start >> end;

    int len = end - start;

    vector<string> binaries;

    // Generating Binaries in range
    for (int i = start; i <= end; i++)
    {
        string b = decToBin(i);
        binaries.push_back(b);
    }

    // Append zeros in all binaries -> if len is less
    int binLen = binaries[len - 1].length();
    for (int i = 0; i <= len; i++)
    {
        string b = binaries[i];
        while (b.length() < binLen)
        {
            b += '0';
        }
        reverse(b.begin(), b.end());
        binaries[i] = b;
    }

    // Print Binaries
    for (int i = 0; i <= len; i++)
    {
        cout << binaries[i] << endl;
    }

    return 0;
}