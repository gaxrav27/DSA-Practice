#include <bits/stdc++.h>
using namespace std;

int countset(int n)
{
    int count = 0;
    while(n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
int n = 3;

auto res = countset(n);
cout<<res;
return 0;
}