#include <bits/stdc++.h>
using namespace std;
int minElement(vector<int> &nums)
{
    int low = 0;
    int high = nums.size()-1;
    int mid;
    while(low<high)
    {
        mid = low + ((high-low)/2);
        if(nums[mid]>nums[high])
        {
            low = mid + 1;
        }
        if(nums[mid]<nums[high])
        {
            high = mid;
        }
    }
    return nums[low];
}
int main()
{
vector<int> nums = {41,56,69,73,89,12,34,38};
int res = minElement(nums);
cout<<res;
return 0;
}