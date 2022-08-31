class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i, j;
        int n = matrix.size();
        int arr[n][n];
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                arr[i][j] = matrix[n-j-1][i];
            }
        }
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                matrix[i][j] = arr[i][j];
            }
        }
    }
};