#include <bits/stdc++.h>
using namespace std;
/*Brute Force Approach
void rotate_array_once(int* arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        swap(arr[i],arr[i+1]);
    }
}
void rotate_array_k(int* arr, int n, int k)
{
    
    for(int i=0;i<k;i++)
    {
        rotate_array_once(arr,n);
    }

} */
/*Optimal Approach*/
void rotate_array_k(int* arr, int n, int k)
{
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
}
int main()
{
    int arr[10] = {12,23,43,21,69,45,34,56,78,90};
    int n = 10;
    int k = 0;
    cin>>k;
    k=k%n;
    rotate_array_k(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}