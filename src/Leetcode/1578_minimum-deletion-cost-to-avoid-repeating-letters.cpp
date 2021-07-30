// Problem Statement:  https://leetcode.com/problems/minimum-deletion-cost-to-avoid-repeating-letters/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minCost(string s, vector<int> cost)
    {
        long long int res = 0;
        for (int i = 0; i < cost.size();)
        {
            char c = s[i];
            int j = 1;
            int sum = cost[i], max_cost = sum;
            while (s[i + j] == s[i])
            {
                sum += cost[i + j];
                max_cost = max(max_cost, cost[i + j]);
                j++;
            }

            res += (sum - max_cost);
            i += j;
        }
        return res;
    }
};

int main()
{
    Solution a;
    cout << a.minCost("abaac", {1, 2, 3, 4, 5}) << "\n";
    return 0;
}
