#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[5] = {1, 2, 2, 4, 5};
    int arr2[4] = {3, 4, 5, 6};
    int n1 = 5, n2 = 4;
    int i = 0, j = 0;
    vector<int> unionArr;
    while(i < n1 && j < n2)
    {
        if(arr1[i] <= arr2[j])
        {
            if(unionArr.empty() || arr1[i] != unionArr.back())
            {
                unionArr.emplace_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if(unionArr.empty() || arr2[j] != unionArr.back())
            {
                unionArr.emplace_back(arr2[j]);
            }
            j++;
        }
    }
    while(i < n1)
    {
        if(unionArr.empty() || arr1[i] != unionArr.back())
        {
            unionArr.emplace_back(arr1[i]);
        }
        i++;
    }
    while(j < n2)
    {
        if(unionArr.empty() || arr2[j] != unionArr.back())
        {
            unionArr.emplace_back(arr2[j]);
        }
        j++;
    }
    for(auto it : unionArr)
    {
        cout << it << " ";
    }
    return 0;
}