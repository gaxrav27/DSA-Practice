#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
/* int helper(long long n, int index)
{
    if (index == n)
        return 1;
    long long res = 0;
    if (index % 2 == 0)
    {
        for (int digit : {2, 4, 6, 8, 0})
            res = (res + helper(n, index + 1)) % mod;
    }
    else
    {
        for (int digit : {2, 3, 5, 7})
            res = (res + helper(n, index + 1)) % mod;
    }
    return res;
}
int countGoodNumbers(long long n)
{
    int index = 0;
    return helper(n, index);
} */
const int MOD = 1e9 + 7;

// Fast modular exponentiation: computes (base^exp) % MOD in O(log exp)
long long power(long long base, long long exp)
{
    if (exp == 0)
        return 1;

    long long half = power(base, exp / 2);
    long long result = (half * half) % MOD;

    // Multiply once more if exponent is odd
    if (exp % 2 == 1)
    {
        result = (result * base) % MOD;
    }

    return result;
}
int countGoodNumbers(long long n)
{
    long long evenPositions = (n + 1) / 2;
    long long oddPositions = n / 2;

    long long evenChoices = power(5, evenPositions);
    long long oddChoices = power(4, oddPositions);

    return (evenChoices * oddChoices) % MOD;
}
