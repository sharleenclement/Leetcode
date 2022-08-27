class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i, j;
        set<int> l;
        set<int> r;
        for(i=0;i<matrix.size();++i)
        {
            for(j=0;j<matrix[i].size();++j)
            {
                if(matrix[i][j]==0)
                {
                    l.insert(i);
                    r.insert(j);
                }
            }
        }
        for(i=0;i<matrix.size();++i)
        {
            for(j=0;j<matrix[i].size();++j)
            {
                auto it1 = l.find(i);
                auto it2 = r.find(j);
                if(it1!=l.end() or it2!=r.end())
                    matrix[i][j] = 0;
            }
        }
    }
};