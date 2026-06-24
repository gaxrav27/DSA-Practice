#include <bits/stdc++.h>
using namespace std;
int maxElement(vector<vector<int>> &mat , int mid)
{
    int ret = 0;
    for(int i = 0 ; i < mat.size() ; i++)
    {
      if(mat[ret][mid]<mat[i][mid])
      ret = i;
    }
    return ret;
}
vector<int> peak2d(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        int row = maxElement(mat,mid);
        int element = mat[row][mid];
        int left = 0;
        int right = 0;
        if(mid>0)
        left = mat[row][mid-1];
        else 
        left = -1;
        if(mid<n-1)
        right = mat[row][mid+1];
        else
        right = -1;
        if(element>right && element>left)
        return {row,mid};
        else if(element>right)
        high = mid - 1;
        else
        low = mid + 1;
    }
    return {-1,-1};
}
int main()
{
vector<vector<int>> mat = {{10,20,15},{21,30,14}};
auto res = peak2d(mat);
cout<<res[0]<<" "<<res[1];
return 0;
}