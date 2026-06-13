#include <bits/stdc++.h>
using namespace std;
int bs(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size()-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = low+((high-low)/2);
        if(nums[mid]==target)
        {
          ans = mid;
        }
        if(nums[low]==nums[mid]==nums[high]) // when duplicates are allowed
        {
            low++; high -- ;
        }
        if(nums[low]<=nums[mid])
        {
            if(target>=nums[low] && target<=nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid +1;
            }
        }
        else
        {
            if(target>=nums[mid] && target<=nums[high])
            low = mid + 1;
            else
            high  = mid - 1;
        }
    }
    return ans;
}
int main()
{
vector<int> nums = {41,56,69,73,89,12,34,38};
int res = bs(nums, 12);
cout<<res;
return 0;
}