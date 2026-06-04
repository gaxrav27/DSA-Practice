#include <bits/stdc++.h>
using namespace std;
/*Brute Force Approach
int missingNumber(vector<int> &arr)
{
    int n = arr.size()+1;
    vector<int> hash(n+1,0);
    for(int i=0;i<n-1;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(hash[i] == 0)
        {
            return i;
        }
    }
    return -1;
} */
//Optimal Approach
int missingNumber(vector<int> &arr)
{
    int n=arr.size()+1;
    int sum = (n*(n+1))/2;
    int arrSum = 0;
    for(int i=0;i<n-1;i++)
    {
        arrSum+=arr[i];
    }
    return sum-arrSum;
}
int main()
{
    vector<int>arr = {2,4,3,6,8,1,5};  
    int res = missingNumber(arr);
    cout<<res<<endl;
    return 0;  
}
