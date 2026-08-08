#include <bits/stdc++.h>
using namespace std;
int calc(string s, int i, long long ans, int sign)
{
    if(i>=s.length() || !isdigit(s[i]))
        return ans * sign;
    if (isdigit(s[i]))
    {
        ans = ans * 10 + (s[i] - '0');
    }
    if (sign * ans <= INT_MIN) return INT_MIN;
    if (sign * ans >= INT_MAX) return INT_MAX;
    return calc(s, ++i, ans, sign);
}
int atoi(string s)
{
    if (s.empty())
        return 0;
    int i = 0;
    while (s[i] == ' ')
        i++;
    long long ans = 0;
    int sign = 1;
    if (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
            sign = -1;
        else
            sign = 1;
        i++;
    }
    ans = calc(s, i, ans, sign);
    return ans;
}
int main()
{
    string s = "-042";
    int res = atoi(s);
    cout << res;
    return 0;
}