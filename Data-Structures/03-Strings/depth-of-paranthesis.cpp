#include <bits/stdc++.h>
using namespace std;
int maxDepth(string s)
{
    int depth = 0, ans = 0;
    for(char c : s)
    {
        if(c=='(')
        {
            depth++;
            ans = max(ans,depth);
        }
        else if(c==')')
        {
            depth--;
        }
    }
    return ans;
}
int main()
{
string s = "(1+(2*3)+((8)/4))+1";
int ans = maxDepth(s);
cout<<ans;
return 0;
}