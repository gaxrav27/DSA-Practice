#include <bits/stdc++.h>
using namespace std;
/*Brute force approach
vector<vector<int>> foursum (vector<int> &nums,int target)
{
    set<vector<int>> st;
    for(int i = 0 ; i < nums.size();i++)
    {
        for(int j = i + 1 ; j < nums.size() ; j++)
        {
            set <int> hashset;
            for(int k = j + 1 ; k < nums.size() ; k++)
            {
               int sum  = nums[i] + nums[j] + nums[k];
               int l = target - sum ;
               if(hashset.find(l)!=hashset.end())
               {
                  vector<int> temp = {nums[i],nums[j],nums[k],l};
                  sort(temp.begin(),temp.end());
                  st.insert(temp); 
               }
               hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans ;
} */
vector<vector<int>> foursum(vector<int> &nums, int target)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i]==nums[i-1])
        continue;
        for(int j = i + 1 ; j < nums.size() ; j++)
        {
           if(nums[j]==nums[j-1])
           continue;
           int k = j + 1; int l = nums.size() - 1;
           while(k < l)
           {
              int sum = nums[i] + nums[j] + nums[k] + nums[l];
              if (sum < target)
              {
                k++;
              }
              else if (sum > target)
              {
                l--;
              }
              else
              {
                 vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                 ans.emplace_back(temp);
                 k++;
                 l--;
                 while(nums[k]==nums[k-1] && k<l)
                 k++;
                 while(nums[l]==nums[l+1] && l>k)
                 l--;
              }
           }
        }
    }
    return ans;
}
int main()
{
vector<int> nums={1,0,-1,0,-2,2};
auto res = foursum(nums,0);
for(int i = 0; i<res.size();i++)
{
    for(int j=0;j<res[i].size();j++)
    {
        cout<<res[i][j];
    }
}
return 0;
}