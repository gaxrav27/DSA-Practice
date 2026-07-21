#include <bits/stdc++.h>
using namespace std;
string freqSort(string s)
{
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    priority_queue<pair<int,char>> pq;
    for(auto it:mp)
    {
        pq.push({it.second,it.first});
    }
    string ans="";
    while(!pq.empty())
    {
        auto it=pq.top();
        pq.pop();
        for(int i=0;i<it.first;i++)
        {
            ans+=it.second;
        }
    }
    return ans;
}
int main()
{
string s = "abracadabra";
string res = freqSort(s);
cout<<res;
return 0;
}