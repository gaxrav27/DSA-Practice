#include <bits/stdc++.h>
using namespace std;
bool checkset(int n,int i)
{
    if(n & (1<<i))
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
int i = 2;
auto res = checkset(n,i);
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