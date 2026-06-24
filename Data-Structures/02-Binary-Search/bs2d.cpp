#include <bits/stdc++.h>
using namespace std;
bool bs2d(vector<vector<int>> &matrix, int k)
/*
{
   int lowr = 0;
   int highr = matrix.size()-1;
   int n = matrix[0].size()-1;
   while(lowr<highr)
   {
     int midr = lowr + (highr-lowr)/2;
     if(matrix[midr][n]<k)
     {
       lowr = midr + 1;
     }
     else if(matrix[midr][n]>k && matrix[midr][0]>k)
     {
        highr = midr - 1;
     }
     else
     {
        lowr = midr;
        highr = midr;
     }
   }
   int lowc = 0;
   int highc = n;
   while(lowc<=highc)
   {
    int midc = lowc + (highc-lowc)/2;
    if(matrix[lowr][midc]>k)
    highc = midc - 1;
    else if(matrix[lowr][midc]<k)
    lowc = midc + 1;
    else
    return true;
   }
   return false;
} 
*/
{
   int low = 0;
   int m = matrix.size();
   int n = matrix[0].size();
   int high = (m*n)-1;
   while(low<=high)
   {
    int mid = low + (high-low)/2;
    int element = matrix[mid/n][mid%n];
    if(element>k)
    {
        high = mid - 1;
    }
    else if (element<k)
    low = mid + 1;
    else
    return true;
   }
   return false;
}
int main()
{
vector<vector<int>> matrix = {{1,4,5,7},{11,15,17,20},{22,25,27,30},{35,69,81,92}};
int k;
cin>>k;
bool res = bs2d(matrix,k);
if(res==true)
{
    cout<<"Element found";
}
else
{
    cout<<"Element not found";
}
return 0;
}