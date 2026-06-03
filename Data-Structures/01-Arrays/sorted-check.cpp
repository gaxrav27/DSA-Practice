#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>
#include <cmath>
#include <climits>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    bool is_sorted = true;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        continue;
        else
        {
            is_sorted = false; break;
        }
    }
    if(is_sorted == true)
    cout<<"The array is sorted";
    else
    cout<<"The araay is not sorted";
return 0;
}