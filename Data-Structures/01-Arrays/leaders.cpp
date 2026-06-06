#include <bits/stdc++.h>
using namespace std;
vector <int> leaders(vector <int> &nums)
{
    vector<int> ans;
    ans.emplace_back(nums[nums.size()-1]);
    int max = nums[nums.size()-1];
    for(int i = nums.size()-1;i>=0;i--)
    {
        if(nums[i]>max)
        {
            ans.emplace_back(nums[i]);
            max = nums[i];
        }
    }
    return ans;
}
int main()
{
vector <int> nums = {10,22,12,3,0,6};
auto res = leaders(nums);
for(int i =0; i<res.size();i++)
{
    cout<<res[i]<<" ";
}
return 0;
}