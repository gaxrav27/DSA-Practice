#include <bits/stdc++.h>
using namespace std;
int single (vector <int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        
        // Case 1: mid is at an EVEN index
        if (mid % 2 == 0) {
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2; 
            } else {
                high = mid;     
            }
        } 
        // Case 2: mid is at an ODD index
        else {
            if (nums[mid] == nums[mid - 1]) {
                low = mid + 1; 
            } else {
                high = mid;    
            }
        }
    }
    
    // low and high will converge on the single element
    return nums[low];
}
int main()
{
vector<int> nums = {1,1,2,3,3,4,4,7,7,9,9};
int res = single(nums);
cout<<res;
return 0;
}