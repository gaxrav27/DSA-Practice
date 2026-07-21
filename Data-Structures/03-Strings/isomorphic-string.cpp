#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> mp;
    unordered_set<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp.find(s[i]) == mp.end())
        {
            if(st.find(t[i]) !=st.end())
            {
                return false;
            }
            else{
                mp[s[i]] = t[i];
                st.insert(t[i]);
            }
        }
        else
        {
            if(mp[s[i]]!=t[i])
            {
                return false;
            }
            
        }
    }
    return true;
}
int main()
{
    string s = "paper";
    string t = "title";
    bool ans = isIsomorphic(s, t);
    cout << ans;
    return 0;
}