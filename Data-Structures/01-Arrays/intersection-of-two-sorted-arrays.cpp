#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[2] = {4, 5};
    int arr2[4] = {2, 3, 5, 6};
    int n1 = 2, n2 = 4;
    int i = 0, j = 0;
    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (arr1[i] == arr2[j])
        {
            if (unionArr.empty() || arr1[i] != unionArr.back())
            {
                unionArr.emplace_back(arr1[i]);
            }
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (auto it : unionArr)
    {
        cout << it << " ";
    }
    return 0;
}