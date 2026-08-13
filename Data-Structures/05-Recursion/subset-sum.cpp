#include <bits/stdc++.h>
using namespace std;
void subsetSumHelper(vector<int>& nums, int n, vector<int>& res, int i, int sum)
{
   if(i==n)
    {
         res.push_back(sum);
         return;
    }
    subsetSumHelper(nums,n,res,i+1,sum+nums[i]);
    subsetSumHelper(nums,n,res,i+1,sum);
}
vector<int> subsetSum(vector<int>& nums)
{
    vector<int> res;
    int n = nums.size();
    subsetSumHelper(nums, n, res, 0, 0);
    return res;
}
int main()
{
vector<int> nums = {5,2,1};
auto res = subsetSum(nums);
for(auto element : res)
{
    cout<<element<<" ";
}
return 0;
}