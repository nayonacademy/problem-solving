#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector &nums)
    {
        if (nums.size() == 0)
            return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        nums.resize(i + 1);
        return nums.size();
    }

};
