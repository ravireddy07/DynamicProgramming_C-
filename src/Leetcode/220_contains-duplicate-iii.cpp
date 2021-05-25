// Problem Statement: https://leetcode.com/problems/contains-duplicate-iii/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsNearbyAlmostDuplicate(vector<int> nums, int k, int t)
    {
        int n = nums.size();
        if (n == 0 || k < 0 || t < 0)
            return false;
        unordered_map<int, int> buckets;
        for (int i = 0; i < n; ++i)
        {
            int bucket = nums[i] / ((long)t + 1);

            if (nums[i] < 0)
                --bucket;
            if (buckets.find(bucket) != buckets.end())
                return true;
            else
            {
                buckets[bucket] = nums[i];
                if (buckets.find(bucket - 1) != buckets.end() && (long)nums[i] - buckets[bucket - 1] <= t)
                    return true;
                if (buckets.find(bucket + 1) != buckets.end() && (long)buckets[bucket + 1] - nums[i] <= t)
                    return true;

                if (buckets.size() > k)
                {
                    int key_to_remove = nums[i - k] / ((long)t + 1);
                    if (nums[i - k] < 0)
                        --key_to_remove;
                    buckets.erase(key_to_remove);
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution a;
    cout << a.containsNearbyAlmostDuplicate({-1, 2147483647}, 2, 4) << "\n";
    return 0;
}
