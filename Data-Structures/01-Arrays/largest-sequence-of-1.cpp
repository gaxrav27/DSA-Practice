#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*Approach 1
int maxConsecutiveOnes(vector<int> &nums)
{
    int count =0;
    int i = 0;
    int j = 0;
    int n = nums.size();
    while(i<n && j<n)
    {
        if(nums[i]==1)
        {
            j=i;
            while(j<n && nums[j]==1)
            {
                j++;
            }
            count = max(count, j-i);
            i=j;
        }
        else
        i++;
    }
    return count;
}*/
//Approach 2
int maxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]==1)
        {temp++;}
        else
        {count=max(count,temp); temp=0;}

    }
    return max(count, temp);
}
int main()
{
    vector<int> nums = {1, 0, 1, 1, 0, 1};
    int res = maxConsecutiveOnes(nums);
    cout << res << endl;
    return 0;
}