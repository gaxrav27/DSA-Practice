#include <bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int> &nums)
{
    unordered_map<int,int> hashmap;
    int sum = 0;
    hashmap[0]=-1;
    int maxlength = 0;
    for(int i = 0; i<nums.size();i++)
    {
       sum+=nums[i];
       if(hashmap.find(sum)!=hashmap.end())
       {
         maxlength=max(maxlength,i-hashmap[sum]);
       }
       else
       hashmap[sum]=i;
    }
    return maxlength;
}
int main()
{
vector<int> nums = {15,-2,2,-8,1,7,10,23};
int res = maxSubarray(nums);
cout<<res;
return 0;
}