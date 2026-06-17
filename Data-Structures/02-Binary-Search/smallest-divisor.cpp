#include <bits/stdc++.h>
using namespace std;
bool thresholdCheck(vector<int> &nums, int mid, int threshold)
{
    int sum = 0;
    for(int i = 0; i < nums.size() ; i++)
    {
        sum+=ceil(nums[i]/((double)mid));
    }
    return sum<=threshold;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
   int low = 1;
   int high = *max_element(nums.begin(),nums.end());
   int ans;
   while(low<=high)
   {
    int mid = low + (high-low)/2;
    if(thresholdCheck(nums,mid,threshold))
    {
        ans = mid;
        high = mid-1;
    }
    else
    {
        low = mid+1;
    }
   }
   return ans;
}
int main()
{
    vector <int> nums = {44,22,33,11,1};
    int threshold;
    cin>>threshold;
    int res = smallestDivisor(nums, threshold);
    cout<<res;
return 0;
}