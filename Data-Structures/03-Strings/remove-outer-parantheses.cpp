#include <bits/stdc++.h>
using namespace std;
string removed(string s)
{
    int cnt = 0;
    string ans = "";
    for(int i = 0 ; i < s.length() ; i++)
    {
      if(s[i]=='(')
      {
        if(cnt>0)
        {
         ans+=s[i];
        }
        cnt++;
      }
      else if(s[i]==')')
      {
        cnt--;
        if(cnt>0)
        {
            ans+=s[i];
        }
      }
    }
    return ans;
}
int main()
{
string s = "((()))";
string res = removed(s);
cout<<res;
return 0;
}