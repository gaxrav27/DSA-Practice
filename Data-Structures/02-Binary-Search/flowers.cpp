#include <bits/stdc++.h>
using namespace std;
bool counthours(vector<int> &bloomDay, int m, int k, int mid)
{
   int flowercount = 0;
   int bouquetcount = 0;
   for(int i = 0 ; i < bloomDay.size() ; i++)
   {
     if(bloomDay[i]<=mid)
     {
        flowercount++;
        if(flowercount==k)
        {
            bouquetcount++;
            flowercount=0;
        }
        
     }
     else
     {
        flowercount=0;
     }
   }
   return bouquetcount>=m;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    int low = 1;
    int high = *max_element(bloomDay.begin(),bloomDay.end());
    int ans = -1;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(counthours(bloomDay,m,k,mid)==true)
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
vector<int> bloomDay = {1,10,3,10,2};
int m ,k;
cin>>m;
cin>>k;
int res = minDays(bloomDay,m,k);
cout<<res;
return 0; 
}