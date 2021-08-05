class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i, sr = 0, sc = 0, er = m - 1, ec = n - 1;
        vector<int> v;
        while(sr<=er && sc<=ec)
        {
            for(i=sc;i<=ec;++i)
            {
                v.push_back(matrix[sr][i]);
            }
            sr+=1;
            for(i=sr;i<=er;++i)
            {
                v.push_back(matrix[i][ec]);
            }
            ec-=1;
            if(er>=sr)
            {
                for(i=ec;i>=sc;--i)
                {
                    v.push_back(matrix[er][i]);
                }
                er-=1;
            }
            if(ec>=sc)
            {
                for(i=er;i>=sr;--i)
                {
                    v.push_back(matrix[i][sc]);
                }
                sc+=1;
            }
        }
        return v;
    }
};