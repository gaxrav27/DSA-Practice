#include <bits/stdc++.h>
using namespace std;

int bslb(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size()-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = low+((high-low)/2);
        if(nums[mid]>=target)
        { 
          ans = mid;
          high = mid -1;
        }
        else
        {
          low = mid + 1;
        }
    }
    return ans;
}
int main()
{
vector<int> nums = {12,34,34,36,37,38,41,56,69,73,89};
//lb = lower_bound(nums,nums.end(),69); shortcut worrks for upper bound too
int res = bslb(nums, 37);
cout<<res;
return 0;
}