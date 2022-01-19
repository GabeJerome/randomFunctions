#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

/*
    This function finds all of the possible combinations of integers
within a given range that sum to a given target. It takes three inputs of
minimum range, maximum range, and the target value. The minimum range is
the lowest number that will be included in the sum while the maximum range
is the largest. It outputs in the form of a + b = target where a < b.
*/

int main()
{
    vector<int> nums;
    int target;
    int i, j;
    int minRange, maxRange;

    cout << "Enter the minimum of the range to sum" << endl;
    cin >> minRange;
    cout << "Enter the maximum of the range to sum" << endl;
    cin >> maxRange;
    cout << "Enter the target integer" << endl;
    cin >> target;
    
    for (i = minRange; i <= maxRange; i++)
        nums.push_back(i);

        for (i = 0; i < nums.size(); i++)
        {
            for (j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    nums[0] = nums[i];
                    nums[1] = nums[j];
                    cout << setw(4) << nums[0] << " + " << nums[1] << " = " << target << endl;
                }
            }
        }

        return 0;
}