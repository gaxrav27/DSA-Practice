#include <bits/stdc++.h>
using namespace std;
bool allowed (vector<int> &arr, int students, int n, int mid)
{
    int studentcount = 1;
    int pagescount = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]>mid)
        return false;
        if(pagescount+arr[i] > mid)
        {
          studentcount++;
          pagescount=arr[i];
        }
        else
        {
            pagescount+=arr[i];
        }
    }
    return studentcount<=students;
}
int bs(vector<int> &arr, int students , int n)
{
    int ans = 0;
    if (students>n) 
    return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(allowed(arr,students,n,mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        low = mid + 1;
    }
    return ans;
}
int main()
{
vector<int> arr = {12,34,67,90};
int students = 2;
int n  = arr.size();
int res = bs(arr,students,n);
cout<<res;
return 0;
}