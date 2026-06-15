#include <bits/stdc++.h>
using namespace std;
int peakelement(vector<int> &nums)
{
    int left = 1;
    int right = nums.size() - 2;
    if(nums[0]>nums[1])
    return 0;
    if(nums[nums.size()-1]>nums[nums.size()-2])
    return nums.size()-1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // If the next element is greater, peak is on the right
        if (nums[mid] < nums[mid + 1] && nums[mid] > nums [mid-1])
        {
            return mid;
        }
        else if (nums[mid]>nums[mid-1])
        {
            left = mid + 1;
        }
        else if (nums[mid]<nums[mid-1])
        {
            right = mid - 1;
        }
        else
        left = mid + 1;
    }
    return -1; // tracking index
}
int main()
{
    vector<int> nums = {1, 2, 1, 4, 5, 6, 7, 8};
    int res = peakelement(nums);
    cout << res;
    return 0;
}