#include <bits/stdc++.h>
using namespace std;
/*Brute force approach
int largestSequence(vector<int> &nums)
{
    int count = 0;
    sort(nums.begin(),nums.end());
    int lastelement = INT_MIN;
    for(int i = 0;i<nums.size()-1;i++)
    {
        if(nums[i]==lastelement)
        {
            continue;
        }
        if(nums[i]!=lastelement)
        {
            if(nums[i]==(lastelement+1))
            {
                count++;
            }
            lastelement = nums[i];
        }
    }
    return count;
}*/
//Optimal approach
int largestSequence(vector<int> &nums)
{
    unordered_set <int> st;
    if(nums.size()==0)
    return 0;
    int x; int count = 0, longest = 0;
    for(int i = 0; i<nums.size();i++)
    {
        st.insert(nums[i]);
    }
    for(auto it : st)
    {
        if(st.find(it-1)==st.end())
        {
          count = 1;
          x = it;
          while(st.find(x+1)!=st.end())
          {
            count++;
            x++;
          }
          longest=max(longest,count);
        }
    }
    return longest;
}
int main()
{
vector <int>nums = {0,3,7,2,5,8,4,6,0,1};
int res = largestSequence(nums);
cout<< res ;
return 0;
}