#include <bits/stdc++.h>
using namespace std;
int clearnum(int n,int i)
{
    return(n&(~(1<<i))); 
}
int main()
{
int n = 9;
int i = 2;
auto res = clearnum(n,i);
cout<<res;
return 0;
} 