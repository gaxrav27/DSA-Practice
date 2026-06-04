#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int xorSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        xorSum = xorSum ^ nums[i];
    }
    return xorSum;
}
int main()
{
vector<int> nums = {4,1,2,1,2};
int res = singleNumber(nums);
cout<<res<<endl;
return 0;
}