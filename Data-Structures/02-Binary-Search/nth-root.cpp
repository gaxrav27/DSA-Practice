#include <bits/stdc++.h>
using namespace std;
double nthRoot(double num, double n)
{
    double low = 0;
    double high = num;
    double eps=1e-6;
    double ans = 0;
    while((high-low)>eps)
    {
       double mid = low + (high-low)/2;
       double midc=1;
       for(int i = 0; i<n;i++)
       {
         midc*=mid;
       }
       if(midc<=num)
       {
        ans = mid;
        low = mid;
       }
       else
       high = mid;
    }
    return ans;
}
int main()
{
double num = 0;
double n = 0;
cin>>num;
cin >> n;
double res = nthRoot(num,n);
cout<<res;
return 0;
}