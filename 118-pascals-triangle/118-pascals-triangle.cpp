class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i, j, n = numRows, c=1;
        vector<vector<int>> vec;
        for(i=1;i<=n;++i)
        {
            vector<int> v;
            c = 1;
            for(j=1;j<=i;++j)
            {
                v.push_back(c);
                c = c*(i-j)/j;
            }
            vec.push_back(v);
        }
        return vec;
    }
};