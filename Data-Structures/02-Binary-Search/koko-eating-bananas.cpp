#include <bits/stdc++.h>
using namespace std;
int counthours(vector<int> &piles, int k)
{
    int ans=0;
    for(int i = 0; i < piles.size() ; i++)
    {
       ans+=(piles[i]+k-1)/k;
    }
    return ans;
}
int speed(vector<int> &piles, int h)
{
    int low = 1;
    int high = *max_element(piles.begin(),piles.end());
    int ans = INT_MAX;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        int hours = counthours(piles,mid);
        if(hours>h)
        low = mid + 1;
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
vector<int> piles = {3,6,7,11};
int h;
cin>>h;
int res = speed(piles,h);
cout<<res;
return 0; 
}