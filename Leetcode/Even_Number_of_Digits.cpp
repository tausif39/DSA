#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countdigit(int nums)
    {
        int cnt = 0;
        while (nums > 0)
        {
            nums /= 10;
        }
        return cnt++;
    }
    bool even(int num)
    {
        int ptakrna = countdigit(num);

        return ptakrna % 2 == 0;
    }

    int findNumbers(vector<int> &nums)
    {
        int count = 0;

        for (auto num : nums)
        {
            if (even(num) == true)
                count++;
        }
        return count;
    }

    int findNumbers(vector<int> &nums)
    {
        int res = 0;
        for (auto num : nums)
        {
            res += (int)log10(num) & 1;
        }
        return res;
    }
};

int main()

{
    vector<int> nums = {12, 345, 2, 6, 7896};

    cout << findNumbers(nums);
}