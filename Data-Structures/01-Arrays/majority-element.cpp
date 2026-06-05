#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int count = 1;
    int n = nums.size();
    if (n == 1)
        return nums[0];
    sort(nums.begin(), nums.end());
    int maxElement = nums[0];
    int maxCount = 1;
    for (int j = 1; j < n; j++)
    {
        if (nums[j] == nums[j - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxElement = nums[j];
        }
    }
    return maxElement;
}
int main()
{
    vector<int> nums = {2, 2, 3, 3, 1, 2, 2};
    int res = majorityElement(nums);
    cout << res << endl;
    return 0;
}