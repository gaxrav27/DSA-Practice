#include <bits/stdc++.h>
using namespace std;
/*Brute force approach
int longestSubarray(vector<int> &nums, int k)
{
    int n =nums.size();
    int len = 0;
    for(int i = 0; i<n; i++)
    {
        int sum =0;
        for(int j=i;j<n;j++)
        {
            sum+=nums[j];
            if(sum==k)
            {
                len=max(len,j-i+1);
            }
        }
    }
    return len;
}*/
/*Better solution but optimal only for non-negative numbers
int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    int len =0;
    map<int,int> mp;
    int psum =0;
    for(int i=0; i<n; i++)
    {
        psum+=nums[i];
        if(mp.find(psum)==mp.end())
        {
            mp[psum]=i;
        }
        if(psum==k)
        {
            len=max(len,i+1);
        }
        if(mp.find(psum-k)!=mp.end())
        {
            len=max(len,i-mp[psum-k]);
        }
    }
    return len;
}*/
//Optimal solution only for non-negative numbers
int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    int len =0;
    int i=0, j=0;
    int sum = 0;
    while(j<n && i<n)
    {
        sum+=nums[j];
        while(sum>k)
        {
            sum=sum-nums[i];
            i++;
        }
        if(sum==k)
        {
            len=max(len,j-i+1);
        }
        j++;
    }
    return len;
}
int main()
{
vector<int> nums = {1,8,4,3,2,5,1,1};
cout<<"Enter the sum required : ";
int k;
cin>>k;
int res = longestSubarray(nums,k);
cout<<res<<endl;
return 0;
}