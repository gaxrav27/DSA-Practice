#include <bits/stdc++.h>
using namespace std;
bool allowed (vector<int> &area, int n, int k, int mid)
{
   int paintercount = 1;
   int time = 0;
   for(int i = 0; i<n ; i++)
   {
     if(time+area[i]>mid)
     {
        time=area[i];
        paintercount++;
     }
     else{
        time+=area[i];
     }
   }
   return paintercount<=k;
}
int minTime(vector<int> &area, int n , int k)
{
    int low = *max_element(area.begin(),area.end());
    int high = accumulate(area.begin(),area.end(),0);
    int ans;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(allowed(area,n,k,mid))
        {
            ans = mid;
            high = mid - 1;
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
vector<int> area = {10,20,30,40};
int n = area.size();
int k=2;
int res = minTime(area,n,k);
cout<<res;
return 0;
}