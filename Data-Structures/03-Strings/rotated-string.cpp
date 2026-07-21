#include <bits/stdc++.h>
using namespace std;
    /*string shift(string s)
    {
        int i = 0, j = 1;
        string ans =s;
        while(i<s.length()-1)
        {
           char c = ans[i];
           ans[i]=ans[j];
           ans[j]=c;
           i++;
           j++;
        }
        return ans;
    } */
    string shift(string s)
    {
        return s.substr(1)+s[0];
    }
    bool rotateString(string s, string goal) {
        if(s==goal)
        return true;
        for(int i = 0 ; i < s.length() ; i++)
        {
            s = shift(s);
            if(s==goal)
            {
                return true;
            }
        }
        return false;
    }
int main()
{
string s = "dawhwh";
string goal = "hdawhw";
bool ans = rotateString(s, goal);
cout << ans;
return 0;
}