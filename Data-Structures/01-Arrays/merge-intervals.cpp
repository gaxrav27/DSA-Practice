#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    ans.push_back(nums[0]);
    int j = 0;
    for(int i = 1 ; i < nums.size() ; i++)
    {
        if(nums[i][0]<=ans[j][1])
        {
            ans[j][1]=max(nums[i][1],ans[j][1]);
        }
        else
        {
            ans.push_back(nums[i]);
            j++;
        }
    }
    return ans;
}
int main()
{
vector<vector<int>> nums = {{1,3},{2,6},{8,10},{15,18}};
auto res = mergeIntervals(nums);
for(int i = 0 ; i < res.size() ; i++)
{
    for(int j = 0 ; j < res[i].size() ; j++)
    cout<<res[i][j];
    cout<<endl;
}
return 0;
}