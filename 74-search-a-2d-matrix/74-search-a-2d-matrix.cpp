class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0, j, mid, n = matrix.size(), m = matrix[0].size()-1;
        j = m;
        
        while(i<n && j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else
                j--;
        }
        
        return false;
    }
};