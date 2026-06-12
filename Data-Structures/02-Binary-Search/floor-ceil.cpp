#include <bits/stdc++.h>
using namespace std;
int floor(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size()-1;
    int floor = -1;
    while(low<=high)
    {
        int mid = low+((high-low)/2);
        if(nums[mid]<=target)
        {
            floor = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return floor;
}
int ceil(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size()-1;
    int ceil = -1;
    while(low<=high)
    {
        int mid = low+((high-low)/2);
        if(nums[mid]>=target)
        { 
          ceil = mid;
          high = mid -1;
        }
        else
        {
          low = mid + 1;
        }
    }
    return ceil;
}
int main()
{
vector<int> nums = {12,34,34,36,37,38,41,56,69,73,89};
//lb = lower_bound(nums,nums.end(),69); shortcut worrks for upper bound too
int c = ceil(nums, 35);
int f = floor(nums,35);
cout<<c<<" "<<f;
return 0;
}