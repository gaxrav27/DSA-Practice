#include <bits/stdc++.h>
using namespace std;
int squareRoot(int num)
{
    int low = 0;
    int high = num;
    int ans = 0;
    while(low<=high)
    {
       int mid = low + (high-low)/2;
       if((mid*mid)<=num)
       {
        ans = mid;
        low = mid + 1;
       }
       else
       high = mid - 1;
    }
    return ans;
}
int main()
{
int num = 0;
cin>>num;
int res = squareRoot(num);
cout<<res;
return 0;
}