#include <iostream>
using namespace std;

int main()
{

    int nums[] = {4, 13, 7, 9, 2};
    int target = 11;

    for (int i = 0; i < end(nums) - begin(nums); i++)
    {

        for (int j = i + 1; j < end(nums) - begin(nums); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << nums[i] << ", " << nums[j] << endl;

                break;
            }
        }
    }

    return 0;
}