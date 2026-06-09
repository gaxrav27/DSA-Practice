#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> &nums1,int m,vector<int>nums2,int n)
{
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(i>=0 && j>=0)
    {
        if(nums1[i]>nums2[j])
        {
            nums1[k]=nums1[i];
            i--;
        }
        else
        {
            nums1[k]=nums2[j];
            j--;
        }
        k--;
    }
    while(j>=0)
    {
        nums1[k]=nums2[j];
        j--;k--;
    }
    return nums1;
}
int main()
{
vector<int> nums1 = {1,2,3,0,0,0};
vector<int> nums2 = {2,4,6};
int m  = nums1.size();
int n = nums2.size();
auto res = merge(nums1,m,nums2,n);
for(int i =0;i<res.size();i++)
{
    cout<<res[i]<<" ";
}
return 0;
}