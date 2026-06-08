#include <bits/stdc++.h>
using namespace std;
int countSum(vector<int> &nums, int k)
{
    int ans=0;
    int n = nums.size();
    map<int,int> mp;
    int psum=0;
    mp[0]=1;
    for(int i=0;i<nums.size();i++)
    {
       psum+=nums[i];
       if(mp.find(psum-k)!=mp.end())
       {
         ans+=mp[psum-k];
       }
       mp[psum]++;
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 3, 2, 1};
    int k;
    cin >> k;
    int res = countSum(nums, k);
    cout << res;
    return 0;
}