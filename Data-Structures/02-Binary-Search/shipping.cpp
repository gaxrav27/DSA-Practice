#include <bits/stdc++.h>
using namespace std;
bool checkDays(vector<int> &weights , int mid, int days)
{
    int totalweight = 0 ;
    int totaldays = 1;
    for(int i = 0 ; i < weights.size(); i++)
    {
       if(weights[i]+totalweight>mid)
       {
        totaldays++;
        totalweight=weights[i];
       }
       else
       {
        totalweight+=weights[i];
       }
    }
    return totaldays<=days;
}
int shipWithinDays(vector<int> &weights, int days)
{
   int high = accumulate(weights.begin(),weights.end(),0);
   int low = *max_element(weights.begin(),weights.end());
   int ans = 0;
   while(low<=high)
   {
    int mid = low+(high-low)/2;
    if (checkDays(weights,mid,days))
    {
        high = mid - 1;
        ans = mid;
    }
    else
    {
        low = mid + 1;
    }
   }
   return ans;
}
int main()
{
vector<int>weights = {1,2,3,4,5,6,7,8,9,10};
int days;
cin>>days;
int res = shipWithinDays(weights,days);
cout<<res;
return 0;
}