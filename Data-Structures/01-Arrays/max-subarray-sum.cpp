#include <bits/stdc++.h>
using namespace std;
vector<int> maxSum(vector<int> &nums)
{
    int maxsum = INT_MIN;
    int sum=0;
    int start=0, beststart = 0, bestend;
    for(int i=0; i<nums.size();i++)
    {
        sum+=nums[i];

        if(sum>maxsum)
        {
            maxsum = sum;
            beststart = start;
            bestend = i;
        }
        if(sum<0)
        {
            start=i;
            sum = 0;
        }
    }
    return {maxsum,beststart,bestend};
}
int main()
{
vector<int> nums = {1,2,-1,3,-4,5,2,-5,8,-4};
auto res = maxSum(nums);
cout<<res[0];
for(int i = res[1] ; i<=res[2] ; i++)
{
    cout<<nums[i]<<" ";
}
return 0;
}