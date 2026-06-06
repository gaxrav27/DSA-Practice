#include <bits/stdc++.h>
using namespace std;
/*Brute force 
void setZeroes(vector<vector<int>> &matrix)
{
    vector <int>m,n;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if(matrix[i][j]==0)
            {
               m.emplace_back(i);
               n.emplace_back(j);
            }
            
        }
    }
    for(int i = 0; i < m.size(); i++)
    {
        int row = m[i];
        int column = n[i];
        for(int j=0;j<matrix[0].size();j++)
        {
            matrix[row][j]=0;
        }
        for(int k=0;k<matrix.size();k++)
        {
            matrix[k][column]=0;
        }
    }
} */
//Optimal 
void setZeroes(vector<vector<int>> &matrix)
{
    vector <int>m,n;
    int col;
    //Marking of rows and columns whose elements will be checked and made zero
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                if(j!=0)
                {
                    matrix[0][j]=0;
                }
                else
                col=0;
            }
            
        }
    }
    //Setting zero to matrices apart from the first row and column because they are used for marking
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[i].size(); j++)
        {
            if(matrix[i][j]!=0)
            {
               if(matrix[0][j]==0 || matrix[i][0]==0)
               matrix[i][j]=0;
            }
            
        }
    }
    //Setting first row to 0 if the first element was 0
    if(matrix[0][0]==0)
    {
        for(int j = 0;j<matrix.size();j++)
        {
            matrix[0][j]=0;
        }
    }
    if(col==0)
    {
        for(int i = 0; i<matrix[0].size();i++)
        {
            matrix[i][0]=0;
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j];
        }
    }
    return 0;
}