#include <bits/stdc++.h>
using namespace std;
void rotatematrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size() - 1; i++)
    {
        for (int j = i + 1; j < matrix[0].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotatematrix(matrix);
}