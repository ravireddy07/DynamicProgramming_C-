// Problem Statement: https://leetcode.com/problems/max-consecutive-ones/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> nums)
    {
        int temp = 0, res = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 1)
                temp += 1;
            else
            {
                if (res < temp)
                    res = temp;
                temp = 0;
            }
        }
        if (res < temp)
            res = temp;
        return res;
    }
};

int main()
{
    Solution a;
    cout << a.findMaxConsecutiveOnes({1, 1, 0, 1, 1, 1}) << "\n";
    return 0;
}
