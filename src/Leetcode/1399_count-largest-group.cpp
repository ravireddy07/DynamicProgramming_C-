// Problem Statement: https://leetcode.com/problems/count-largest-group/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int digSum(int n)
    {
        int s = 0;
        while (n)
        {
            s += n % 10;
            n /= 10;
        }
        return s;
    }
    int countLargestGroup(int n)
    {
        vector<int> v(37, 0);
        for (auto i = 1; i <= n; i++)
            v[digSum(i)]++;
        int c = 0;
        auto m = *max_element(v.begin(), v.end());
        for (auto i : v)
            if (i == m)
                c++;
        return c;
    }
};

int main()
{
    Solution a;
    cout << a.countLargestGroup(15) << "\n";
    return 0;
}
