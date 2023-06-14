bool searchMatrix(vector<vector<int>>& matrix, int target) {

// brute force
    // bool ans=false;

    // for(int i=0;i<mat.size();i++)
    // {
    //     for(int j=0;j<mat[0].size();j++)
    //     {
    //       if (mat[i][j] == target) {
    //         ans = true;
    //       }
    //     }
    // }
    // return ans; 

    //optimal solution
    // create  array
        int lo = 0;
        if(!matrix.size()) return false;
        int hi = (matrix.size() * matrix[0].size()) - 1;
        
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;


}