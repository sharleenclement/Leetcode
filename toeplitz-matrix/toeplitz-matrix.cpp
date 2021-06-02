class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i, j;
        for(i=0;i<matrix.size();++i)
        {
            for(j=0;j<matrix[i].size();++j)
            {
                if((i+1)<matrix.size() && (j+1)<matrix[i].size() && matrix[i][j]!=matrix[i+1][j+1])
                {
                    return false;
                }
            }
        }
        return true;
    }
};