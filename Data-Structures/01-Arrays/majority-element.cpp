#include <bits/stdc++.h>
using namespace std;
/*Brute force soln
int majorityElement(vector<int> &nums)
{
    int count = 1;
    int n = nums.size();
    if (n == 1)
        return nums[0];
    sort(nums.begin(), nums.end());
    int maxElement = nums[0];
    int maxCount = 1;
    for (int j = 1; j < n; j++)
    {
        if (nums[j] == nums[j - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxElement = nums[j];
        }
    }
    return maxElement;
} */
//Optimal approach - Moore's Voting Algo
int majorityElement(vector<int> &nums)
{
    int count=0;
    int maxelement = 0;
    for(int i=0; i<nums.size();i++)
    {
        if(count==0)
        {
            count = 1;
            maxelement = nums[i];
        }
        else if(nums[i]==maxelement)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count =0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==maxelement)
        {
            count++;
        }
    }
    if(count>(nums.size()/2))
    {
        return maxelement;
    }
    return -1;
}
int main()
{
    vector<int> nums = {2, 2, 3, 3, 1, 2, 2};
    int res = majorityElement(nums);
    cout << res << endl;
    return 0;
}