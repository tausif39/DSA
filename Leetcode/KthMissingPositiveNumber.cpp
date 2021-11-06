#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
int findKthPositive(vector<int> &arr, int k)
{
    int i = 1, j = 0, cnt = 0;
    while (cnt != k)
    {  
        while (j < arr.size() - 1)
        {
            if (i != arr[j])
            {
                i++;
                cnt++;
            }
            else if (i == arr[j])
            {
                j++;
                i++;
            }
        }
        if(j==arr.size()-1)
        {
           if (i != arr[j])
            {
                i++;
                cnt++;
            }
            else if (i == arr[j])
            {
                
                i++;
            }
        }
        
    }
    return i-1;
}
};

int main()
{
    vector<int> arr = {1,2};
    cout << findKthPositive(arr, 1);
}
