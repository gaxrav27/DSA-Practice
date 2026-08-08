#include <bits/stdc++.h>
using namespace std;
/*double helper(double x, int n, double ans, int sign)
{
    if (sign == 1 && n != 0)
    {
        ans *= x;
        return helper(x, --n, ans, sign);
    }
    else if (sign == -1 && n != 0)
    {
        ans *= 1 / x;
        return helper(x, ++n, ans, sign);
    }
    else
        return ans;
    return 0.0;
}
double myPow(double x, int n)
{
    if (x == 0)
        return 0;
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    double ans = 1;
    int sign = 1;
    if (n < 0)
    {
        sign = -1;
    }
    return (helper(x, n, ans, sign));
}*/

double helper(double x, long long n)
{
    if (n == 0)
        return 1.0;

    // If n is even: x^n = (x^2)^(n/2)
    if (n % 2 == 0)
    {
        return helper(x * x, n / 2);
    }
    // If n is odd: x^n = x * x^(n-1)
    else
    {
        return x * helper(x * x, (n - 1) / 2);
    }
}
double myPow(double x, int n)
{
    // Cast to long long to prevent INT_MIN overflow when negating
    long long N = n;

    if (N < 0)
    {
        x = 1.0 / x;
        N = -N;
    }

    return helper(x, N);
}

int main()
{
    int x = 2;
    int n = 3;
    int res = myPow(x, n);
    cout << res;
    return 0;
}