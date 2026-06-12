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
            break;
        }
        if(nums[mid]>target)
        {
          high = mid -1;
        }
        if(nums[mid]<target)
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
vector<int> nums = {12,34,38,41,56,69,73,89};
int res = bs(nums, 69);
cout<<res;
return 0;
}