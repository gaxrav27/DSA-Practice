#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(target - nums[i]) != mp.end())
        {
            ans.emplace_back(mp[target - nums[i]]);
            ans.emplace_back(i);
            return ans;
        }
        mp[nums[i]] = i;
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 7, 11, 5, 8, 4, 3, 5, 9, 15, 19, 13};
    int target;
    cin >> target;
    auto l = twoSum(nums, target);
    cout << l[0] << " and " << l[1];
    return 0;
}