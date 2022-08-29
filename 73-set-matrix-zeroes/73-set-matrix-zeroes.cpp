class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int i, j, n = arr.size(), m = arr[0].size();
    
        int mat1[n], mat2[m];

        for(i=0;i<n;++i)
        mat1[i] = INT_MAX;

        for(i=0;i<m;++i)
        mat2[i] = INT_MAX;

        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            {
                if(arr[i][j]==0)
                {
                    mat1[i] = 0;
                    mat2[j] = 0;
                }
            }
        }

        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            {
                if(mat1[i]==0 or mat2[j]==0)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }
};