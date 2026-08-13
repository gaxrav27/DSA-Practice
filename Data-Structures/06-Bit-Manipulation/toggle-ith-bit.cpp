#include <bits/stdc++.h>
using namespace std;
int togglenum(int n,int i)
{
    return(n^(1<<i)); 
}
int main()
{
int n = 9;
int i = 2;
auto res = togglenum(n,i);
cout<<res;
return 0;
} 