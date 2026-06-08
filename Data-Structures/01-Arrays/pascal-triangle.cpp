#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pascalTriangle(int numRows)
{
    vector<vector<int>> ans;
    for( int i = 0 ; i <numRows ; i++)
    {
        vector<int> temp(i+1,1);
        for(int j = 1 ; j < i ; j++)
        {
            temp[j]=(ans[i-1][j] + ans[i-1][j-1]);
        }
        ans.emplace_back(temp);
    }
    return ans;
}
int main()
{
cout<<"Enter number of rows: "<<endl;
int numRows;
cin>>numRows;
auto res = pascalTriangle(numRows);
for(int i = 0 ; i < res.size() ; i++)
{
    for(int j = 0 ; j < res[i].size() ; j++)
    {
       cout << res[i][j];
    }
    cout<<endl;
}
return 0;
}