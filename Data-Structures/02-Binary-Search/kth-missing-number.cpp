#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &arr, int k)
{
    int low = 0;
    int high = arr.size()-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        int missing = arr[mid]-(mid+1);
        if(missing<k)
        low = mid + 1;
        else
        high = mid - 1;
    }
    return high + k +1;
}
int main()
{
vector<int> arr = {1,2,3,4};
int k = 0 ; 
cin >> k;
int res = missingNumber(arr,k);
cout << res;
return 0;
}