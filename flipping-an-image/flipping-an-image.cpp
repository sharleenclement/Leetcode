class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int i, j, m, n;
        m = image.size();
        n = image[i].size();
        vector<vector<int>> flip;
        for(i=0;i<m;++i)
        {
            vector<int> v;
            for(j=n-1;j>=0;--j)
            {
                v.push_back(image[i][j]);
            }
             flip.push_back(v);
        }
        for(i=0;i<m;++i)
        {
            for(j=n-1;j>=0;--j)
            {
                flip[i][j] = flip[i][j] ^ 1;
            }
        }
        return flip;
    }
};