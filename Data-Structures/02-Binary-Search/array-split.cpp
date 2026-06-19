#include <bits/stdc++.h>
using namespace std;
bool allowed(vector<int> &nums, int k , int mid)
{
  int arraysum = 0;
  int split = 1;
  for (int i=0; i<nums.size() ; i++)
  {
    if(nums[i]>mid)
    return false;
    if(arraysum+nums[i]>mid)
    {
        split++;
        arraysum = nums[i];
    }
    else
    {
        arraysum+=nums[i];
    }
  }
  return split<=k;
}
int splitArray(vector<int>& nums, int k) 
{
    int low = *max_element(nums.begin(),nums.end());
    int high = accumulate(nums.begin(),nums.end(),0);
    int ans = -1;
    if(nums.size()<k)
    return -1;
    while(low<=high)
    {
      int mid = low + (high - low)/2;
      if(allowed(nums,k,mid))
      {
        ans = mid;
        high = mid -1 ;
      }
      else
      low = mid + 1;
    }
    return ans;
}
int main()
{
vector<int> nums = {7,2,5,10,8};
int k = 2;
int res = splitArray(nums, k);
cout << res;
return 0;
}