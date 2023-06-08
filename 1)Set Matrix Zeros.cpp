
#include <bits/stdc++.h>

using namespace std;

//Brute force tc(o(n*m)(n+m)) sc(o(1))
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

// optimized soltion
//tc(2*n*m) sc(o(n)+o(m))
int main()
{
     vector<vector<in>> matrix;
     // create two dummy array
     int row[n]={0};
     int col[m]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    // just traverse the matrix linerly  and check if the col or row is 1 or not then just put zero there 
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<m;j++)
        {
            if(row[i] or col[i])
            matrix[i][j]=1;
        }
    }
    
    
    return 0;
}

