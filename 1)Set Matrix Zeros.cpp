
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


	int n=matrix.size();
	int m=matrix[0].size();
	    int row[n] = {0}; // row array
    int col[m] = {0}; // col array

    // Traverse the matrix:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark ith index of row wih 1:
                row[i] = 1;

                // mark jth index of col wih 1:
                col[j] = 1;
            }
        }
    }

    // Finally, mark all (i, j) as 0
    // if row[i] or col[j] is marked with 1.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    
    return 0;
}

// most optimized
int main()
{
    	int n=matrix.size();
	int m=matrix[0].size();

           int col0=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          if(matrix[i][j]==0)
          {
              //mark the ith row
              matrix[i][0]=0;
              //mark the ith col
              if(j!=0)
              matrix[0][j]=0;
              else
              col0=0;
              
          }
        }

    }
            for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]!=0)
                {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                    
                }
                }
            }
        }
    
    // row part
    if(matrix[0][0]==0)
    {
        for(int j=0;j<m;j++)
        matrix[0][j]=0;
    }
    //column part
    if(col0==0)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][0]=0;
        }
    }

    return 0;
}