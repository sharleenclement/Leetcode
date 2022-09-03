class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i, j, mid, n = matrix.size(), m = matrix[0].size()-1;
        for(i=0;i<n;++i)
        {
            j = 0;
            while(j<=m) // 0 < 4
            {
                mid = j + (m-j)/2;
                if(matrix[i][mid]==target)
                    return true;
                else if(matrix[i][mid]<target)
                    j = mid + 1;
                else
                    m = mid - 1;
            }
        }
        return false;
    }
};