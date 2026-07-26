#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Helper function: counts substrings with AT MOST k distinct characters
int countAtMostK(const string& s, int k) {
    if (k <= 0) return 0;

    unordered_map<char, int> freq;
    int i = 0, count = 0;

    for (int j = 0; j < s.length(); j++) {
        freq[s[j]]++;

        // Shrink window if unique characters exceed k
        while (freq.size() > k) {
            freq[s[i]]--;
            if (freq[s[i]] == 0) {
                freq.erase(s[i]);
            }
            i++;
        }

        // All substrings ending at 'j' and starting from 'i' to 'j' are valid
        count += (j - i + 1);
    }

    return count;
}

// Exactly K distinct characters = (At most K) - (At most K - 1)
int countExactlyK(const string& s, int k) {
    return countAtMostK(s, k) - countAtMostK(s, k - 1);
}
int main()
{
    string s = "pqpqs";
    int k = 2;
    int res = countExactlyK(s, k);
    cout << res;
    return 0;
}