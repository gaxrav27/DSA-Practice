#include <bits/stdc++.h>
using namespace std;
int counter(vector<vector<int>> &nums)
{
    int m = nums.size();
    if(m==0)
    return 0;
    int n = nums[0].size();
    int ansc = n;
    for(int i = 0 ; i < m ; i++)
    {
       int low = 0;
       int high = n-1;
       int temp = n;
       while(low<=high)
       {
        int mid = low + (high-low)/2;
        if(nums[i][mid]==0)
        {
            temp = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
       }
       ansc = min(temp,ansc);
    }     
    if(ansc == n)
    return -1;   
    int ans = n - ansc - 1;
    return ans;
}
int main()
{
vector<vector<int>> nums = {{1,1,1,1,1},{1,1,1,1,1}};
int res = counter(nums);
cout<<res;
return 0;
}