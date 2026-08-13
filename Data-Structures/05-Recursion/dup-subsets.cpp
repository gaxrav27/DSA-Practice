#include <bits/stdc++.h>
using namespace std;
void subsetHelper(vector<int>& nums, int n, vector<vector<int>>& res, int start, vector<int>& cvec)
{
    res.push_back(cvec);
    for(int i=start;i<n;i++)
    {
        if(i>start && nums[i]==nums[i-1])
        continue;
        cvec.push_back(nums[i]);
        subsetHelper(nums,n,res,i+1,cvec);
        cvec.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<int> cvec;
    subsetHelper(nums,n,res, 0, cvec);
    return vector<vector<int>>(res.begin(), res.end());
}
int main()
{
    vector<int> nums = {1,2,2};
    auto res = subsetsWithDup(nums);
    for(auto element : res)
    {
        for(auto subelement : element)
        {
            cout<<subelement<<" ";
        }
        cout<<endl;
    }
}