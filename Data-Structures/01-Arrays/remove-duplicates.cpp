/*Problem: Remove Duplicates from a Sorted Array*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 1, 2, 3, 3};
    int i=0;
    int j=1;
    while(j<5)
    {
        if(arr[i] != arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
        j++;
    }
    for (int k=0; k<=i; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<"Number of unique elements: "<<i+1<<endl;
    return 0;
}