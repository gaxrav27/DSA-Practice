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
    int largest = arr[0];
    int seclargest= INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>largest)
        {
            seclargest = largest;
            largest = arr[i];
        }
    }
    if(largest == seclargest)
    {
        cout<<"There is no second largest element in the array."<<endl;
    }
    else
    {
        cout<<"The second largest element in the array is: "<<seclargest<<endl;
    }
return 0;
}