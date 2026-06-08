#include <bits/stdc++.h>
using namespace std;
vector<int> spiralTraversal(vector<vector<int>> &matrix)
{
    int m = matrix[0].size();
    int n = matrix.size();
    vector<int> ans;
    int top=0,left=0,right=m-1,bottom=n-1;
    while(left<=right && top<=bottom)
    {
        for(int i = left;i<=right;i++)
        {
           ans.emplace_back(matrix[top][i]);
        }
        top++;
        for(int i = top;i<=bottom;i++)
        {
           ans.emplace_back(matrix[i][right]);  
        }
        right--;
        if(top<=bottom)
        {
        for(int i = right;i>=left;i--)
        {
           ans.emplace_back(matrix[bottom][i]);
        }
        bottom--;}
        if(left<=right){
        for(int i = bottom;i>=top;i--)
        {
           ans.emplace_back(matrix[i][left]);
        }
        left++;}
    }
    return ans;
}
int main()
{
vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
auto res = spiralTraversal(matrix);
for(int i =0;i<res.size();i++)
{
    cout<<res[i]<<" ";
}
return 0;
}