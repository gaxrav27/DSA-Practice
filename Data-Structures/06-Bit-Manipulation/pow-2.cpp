#include <bits/stdc++.h>
using namespace std;
bool checkset(int n)
{
    if((n & (n-1))==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
int n = 12;
auto res = checkset(n);
if(res==0)
{
    cout<<"false";
}
else
{
    cout<<"true";
}
return 0;
}