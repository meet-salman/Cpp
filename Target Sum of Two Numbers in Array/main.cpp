#include <iostream>
using namespace std;

int main()
{

    int nums[] = {2, 5, 6, 7, 9};
    int target = 11;

    for (int i = 0; i < sizeof(nums); i++)
    {
        int j = i + 1;

        if (nums[i] + nums[j] == target)
        {
            cout << nums[i] << endl;
            cout << nums[j] << endl;

            break;
        }
    }

    return 0;
}