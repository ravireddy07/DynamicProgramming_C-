// Problem Statement: https://leetcode.com/problems/remove-element/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> nums, int val)
    {
        for (auto i = nums.begin(); i != nums.end(); ++i) // Traversing Each Element
        {
            if (*i == val) // Checking Value
            {
                nums.erase(i); // Erasing/Removing Element from vector
                i--;           // Erasing position/index alloted to that removed element
            }
        }
        return nums.size(); // Returning remaining size of the Vector(as per question)
    }
};

int main()
{
    Solution a;
    cout << a.removeElement({3, 2, 2, 3}, 3) << "\n";
    return 0;
}
