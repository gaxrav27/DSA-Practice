#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> & prices)
{
    int profit = 0;
    int min_price=INT_MAX;
    for(int i=0;i<prices.size();i++)
    {
        if(prices[i]<min_price)
        min_price = prices[i];
        else if(prices[i]-min_price>profit)
        profit =prices[i]-min_price;
    }
    return profit;
}
int main()
{
vector<int> prices={7,1,5,3,6,4};
int res = maxProfit(prices);
cout<<res;
return 0;
}