#include <bits/stdc++.h>
using namespace std;
void helper(int n,int start,vector<int>& cvec,int k,vector<vector<int>>& res)
{
    if(cvec.size()==k && n==0)
    {
        res.push_back(cvec);
        return;
    }
    for(int i=start;i<=9;i++)
    {
        if(n-i<0)
        break;
        cvec.push_back(i);
        helper(n-i,i+1,cvec,k,res);
        cvec.pop_back();
    }
}
vector<vector<int>> combinationsum(int k, int n)
{
    vector<vector<int>> res;
    vector<int> cvec;
    helper(n,1,cvec,k,res);
    return res;
}
int main()
{
int k = 3, n = 7;
auto res = combinationsum(k,n);
for(auto ele:res)
{
    for(auto i:ele)
    {
        cout<<i;
    }
}
return 0;
}