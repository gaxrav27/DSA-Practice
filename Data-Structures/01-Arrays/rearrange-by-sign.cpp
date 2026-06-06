#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> &nums)
{
    vector<int> answer(nums.size(),0);
    int i=1,j=0;
    for(int k = 0; k<nums.size();k++)
    {
        if(nums[k]<0)
        {
            answer[i]=nums[k];
            i+=2;
        }
        if(nums[k]>0)
        {
            answer[j]=nums[k];
            j+=2;
        }
    }
    return answer;
}
int main()
{
vector<int> nums = {3,1,-2,-5,2,-4};
vector<int> res = rearrange(nums);
for( int i = 0; i<res.size(); i++)
{
    cout<<res[i];
}
return 0;
}