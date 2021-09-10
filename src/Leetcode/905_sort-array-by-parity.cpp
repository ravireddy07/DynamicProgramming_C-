// Problem Statement: https://leetcode.com/problems/sort-array-by-parity/
// https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3431/discuss/804079/C++-Simple-Solution-or-Top-98.84-in-12-ms-Runtime-or-12ms-and-60ms-Solution-Difference

#include <bits/stdc++.h>
using namespace std;

class sortArrayByParity
{
public:
    vector<int> Method_1(vector<int> A)
    {
        vector<int> result;
        //result.reserve(A.size());
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 == 0)
                result.insert(result.begin(), A[i]);
            else
                result.insert(result.end(), A[i]);
        }
        return result;
    }

    vector<int> Method_2(vector<int> A)
    {
        int size = A.size(), start = 0, end = size - 1;
        while (start < end)
        {
            if (A[start] % 2 == 0)
                start++;
            else
            {
                swap(A[start], A[end]);
                end--;
            }
        }
        return A;
    }

    vector<int> Method_3(vector<int> A)
    {
        vector<int> result;
        //result.reserve(A.size());
        for (int i = 0; i < A.size(); ++i)
            if (A[i] % 2 == 0)
                result.push_back(A[i]);

        for (int j = 0; j < A.size(); ++j)
            if (A[j] % 2 != 0)
                result.push_back(A[j]);
        return result;
    }
};

int main()
{
    vector<int> show;
    sortArrayByParity a;
    show = a.Method_1({3, 1, 2, 4}); //Runtime: 60 ms
    show = a.Method_2({3, 1, 2, 4}); //Runtime: 16 ms
    show = a.Method_3({3, 1, 2, 4}); //Runtime: 12 ms

    cout << "[";
    for (int i = 0; i < show.size(); i++)
    {
        if (i == show.size() - 1)
            cout << show[i];
        else
            cout << show[i] << ", ";
    }
    cout << "]";
}
