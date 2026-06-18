#include <bits/stdc++.h>
using namespace std;
bool works(vector<int> &arr, int mid, int k , int n)
{
    int crnt = 1;
    int last = 0;
    int ct = 1;
    while(crnt!=n)
    {
      if(arr[crnt]-arr[last]>=mid)
      {
        last = crnt ; 
        ct++;
      }
      crnt++;
    }
    if(ct>=k)
    return true;
    else
    return false;
}
int bs (vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = 0;
    sort(arr.begin(),arr.end());
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(works(arr,mid,k,n))
        {ans = mid;
        low = mid + 1;}
        else
        high = mid - 1;
    }
    return ans;
}
int main()
{
vector<int> arr = {0,3,7,10,9};
int k = 4;
int res = bs(arr,k);
cout<<res;
return 0;
}