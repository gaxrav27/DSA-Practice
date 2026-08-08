#include <bits/stdc++.h>
using namespace std;
void helper(vector<int>& nums, int k, int i, int& sum, int currentsum)
{
    if(currentsum>k)
    return;
    if(currentsum==k)
    {
        sum++;
        return;
    }
    if(i==nums.size())
    return;
    helper(nums,k,i+1,sum,currentsum+nums[i]);
    helper(nums,k,i+1,sum,currentsum);
}
int countk(vector<int> &nums, int k)
{
    int sum = 0;
    helper(nums,k,0,sum,0);
    return sum;
}
int main()
{
vector<int> nums = {4,9,2,5,1};
int k =10;
int res = countk(nums,k);
cout<<res;
return 0;
}