#include<bits/stdc++.h>
using namespace std;
int findKthElement(std::vector<int>& arr1, std::vector<int>& arr2, int k) 
{
    if (arr1.size() > arr2.size()) {
        return findKthElement(arr2, arr1, k);
    }
    int m = arr1.size();
    int n = arr2.size();
    int low = max(0, k - n);
    int high = min(k, m);
    
    while (low <= high) {
        int cut1 = low + (high - low) / 2;
        int cut2 = k - cut1;
        int l1 = (cut1 == 0) ? INT_MIN : arr1[cut1 - 1];
        int l2 = (cut2 == 0) ? INT_MIN : arr2[cut2 - 1];
        int r1 = (cut1 == m) ? INT_MAX : arr1[cut1];
        int r2 = (cut2 == n) ? INT_MAX : arr2[cut2];
        if (l1 <= r2 && l2 <= r1) {
            return max(l1, l2);
        }
        else if (l1 > r2) {
            high = cut1 - 1;
        }
        else {
            low = cut1 + 1;
        }
    }
    return -1;
}