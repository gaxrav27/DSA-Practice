#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
    if (s.empty())
    return "";
    int start = 0, maxLen = 0;
    for (int k = 0; k < s.length(); k++)
    {
        int i = k, j = k;
        while (i >= 0 && j < s.length() && s[i] == s[j])
        {
            if (j - i + 1 > maxLen)
            {
                start = i;
                maxLen = j - i + 1;
            }
            i--;
            j++;
        }
        i = k;
        j = k + 1;
        while (i >= 0 && j < s.length() && s[i] == s[j])
        {
            if (j - i + 1 > maxLen)
            {
                start = i;
                maxLen = j - i + 1;
            }
            i--;
            j++;
        }
    }

    return s.substr(start, maxLen);
}
int main()
{

    return 0;
}