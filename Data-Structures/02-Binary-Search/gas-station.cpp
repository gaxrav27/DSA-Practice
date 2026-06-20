#include <bits/stdc++.h>
using namespace std;
int stationcount(vector<int> &station,int k, long double mid)
{
    int count = 0;
    for(int i = 1 ; i < station.size() ; i++)
    {
        long double stationingap = ceil((station[i]-station[i-1])/mid)-1;
        count+=stationingap;
    }
    return count;
}
int dist(vector<int> &station, int k)
{
    long double low = 0;
    long double high = 0;
    for(int i = 0; i<station.size()-1;i++)
    {
        high = max(high,(long double)(station[i+1]-station[i]));
    }
    while(high-low>1e-6)
    {
        long double mid = low + (high-low)/2;
        if(stationcount(station,k,mid)>k)
        low=mid;
        else
        high=mid;
    }
    return high;
}
int main()
{
vector<int> station = {10,20,30,40,50};
int k = 4;
long double res = dist(station,k);
cout<<res;
return 0;
}