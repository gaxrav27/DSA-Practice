#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    vector<int> ans;
    int count1 = 0, count2 = 0;
    int majorityElement1=0, majorityElement2=0;
    for(int i = 0; i<nums.size();i++)
    {
        if(nums[i]==majorityElement1)
        {
            count1++;
        }
        else if(nums[i]==majorityElement2)
        {
            count2++;
        }
        else if(count1==0 && nums[i]!=majorityElement2)
        {
            count1 = 1;
            majorityElement1 = nums[i];
        }
        else if(count2==0 && nums[i]!=majorityElement1)
        {
            count2 = 1;
            majorityElement2 = nums[i];
        }
        else
        {
            count1--; count2 --;
        }
    }
    int pcount1 = 0, pcount2 = 0;
    for(int i = 0; i<nums.size();i++)
    {
        if(nums[i]==majorityElement1)
        {
            pcount1++;
        }
        if(nums[i]==majorityElement2)
        {
            pcount2++;
        }
    }
    if(pcount1>nums.size()/3)
    ans.emplace_back(majorityElement1);
    if(pcount2>nums.size()/3 && majorityElement1!=majorityElement2)
    ans.emplace_back(majorityElement2);
    return ans;
}
int main()
{
vector<int> nums = {3,2,3,4,3,7,3,3,1,3,9,4,3,8};
auto res = majorityElement(nums);
cout<<res[0]<<" "<<res[1];
return 0;
}