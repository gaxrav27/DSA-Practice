#include <bits/stdc++.h>
using namespace std;
void helper(string digits, vector<string>& res, map<char,vector<string>>& mp, int index, string cstr)
{
    if(index==digits.size())
    {
        res.push_back(cstr);
        return;
    }
    for(auto element:mp[digits[index]])
    {
        helper(digits,res,mp,index+1,cstr+element);
    }
}
vector<string> letterCombinations(string digits)
{
    map<char,vector<string>> mp = {{'2',{"a","b","c"}},{'3',{"d","e","f"}},{'4',{"g","h","i"}},
    {'5',{"j","k","l"}},{'6',{"m","n","o"}},{'7',{"p","q","r","s"}},{'8',{"t","u","v"}}
    ,{'9',{"w","x","y","z"}}};
    vector<string> res;
    helper(digits,res,mp,0,"");
    return res;
}
int main()
{
string s = "23";
auto res = letterCombinations(s);
for(auto ele:res)
{
    cout<<ele<<" ";
}
return 0;
}