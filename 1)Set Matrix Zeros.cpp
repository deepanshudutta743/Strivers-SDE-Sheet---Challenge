
#include <bits/stdc++.h>

using namespace std;

//Brute force
void mark_row(vector<vector<int>> &matrix,int row)
{
    for(int j=0;j<matrix[0].size();j++)
    {
        if(matrix[row][j]!=0)
        {
            matrix[row][j]=-1;
        }
    }
    
}
void mark_col(vector<vector<int>> &matrix,int col)
{
    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[i][col]!=0)
        {
            matrix[i][col]=-1;
        }
    }
}
int main()
{
    vector<vector<in>> matrix;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                mark_row(matrix,i);
                mark_col(matrix,j);
            }
        }
    }
    // traverse linerly to the matrix all put zero to all -1
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==-1)
            matrix[i][j]=0;
        }
    }

    return 0;
}
