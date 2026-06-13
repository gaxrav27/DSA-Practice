#include <bits/stdc++.h>
using namespace std;

vector<int> lbub(vector<int> &nums, int target)
{
    if (nums.empty()) return {-1, -1};
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    vector<int> ans = {-1, -1};
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (nums[mid] >= target)
        { 
            ans[0] = mid; 
            high = mid - 1; 
        }
        else
        {
            low = mid + 1;
        }
    }
    if (ans[0] == -1 || nums[ans[0]] != target) {
        return {-1, -1}; 
    }
    low = 0;
    high = n - 1;
    int upper_bound_idx = n; 
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (nums[mid] > target)
        { 
            upper_bound_idx = mid;
            high = mid - 1; 
        }
        else
        {
            low = mid + 1;
        }
    }
    ans[1] = upper_bound_idx - 1;
    return ans;
}
int main()
{
vector<int> nums = {12,34,34,36,37,38,41,56,69,73,89};
//lb = lower_bound(nums,nums.end(),69); shortcut worrks for upper bound too
auto res = lbub(nums, 34);
cout<<res[0]<<" "<<res[1];
return 0;
}