class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0, j, mid, n = matrix.size(), m = matrix[0].size();
        j = n*m-1;
        
        while(i<=j)
        {
            mid = i + (j-i)/2;
            if(matrix[mid/m][mid%m]==target)
                return true;
            else if(matrix[mid/m][mid%m]<target)
                i = mid + 1;
            else
                j = mid - 1;
        }
        
        return false;
    }
};